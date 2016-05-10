// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "RedisProxyService.h"
#include "RedisProxy.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class RedisProxyServiceHandler: virtual public RedisProxyServiceIf {
public:
	RedisProxyServiceHandler() {
		this->redisProxy = shared_ptr<RedisProxy>(
				new RedisProxy("localhost", 6379));
	}

	void getUser(User& _return, const int64_t id) {
		// Your implementation goes here
		printf("getUser\n");
		boost::shared_ptr<User> user = this->redisProxy->getUserById(id);
		_return = *user;
	}

	int64_t addUser(const User& user) {
		// Your implementation goes here
		printf("addUser userName = %s\n", user.name.c_str());
		User user_t;
		user_t.id = user.id;
		user_t.name = user.name;
		return this->redisProxy->addUser(user_t);
	}

	void getAllUser(std::vector<User> & _return) {
		// Your implementation goes here
		printf("getAllUser\n");
		this->redisProxy->getAllUser(_return);
	}

	int64_t addWord(const Word& word) {
		// Your implementation goes here
		printf("addWord\n");

		Word word_t;
		word_t.id = word.id;
		word_t.name = word.name;
		return this->redisProxy->addWord(word_t);
	}

	void getWord(Word& _return, const int64_t id) {
		// Your implementation goes here
		printf("getWord\n");
		boost::shared_ptr<Word> word = this->redisProxy->getWordById(id);
		_return = *word;
	}

	void getAllWord(std::vector<Word> & _return) {
		// Your implementation goes here
		printf("getAllWord\n");
		this->redisProxy->getAllWord(_return);
	}

	void addToken(const Token& token) {
		Token token_t;
		token_t.name = token.name;
		token_t.tokenItemVetor = token.tokenItemVetor;
		this->redisProxy->addToken(token_t);
		printf("addToken\n");
	}

	void getToken(Token& _return, const std::string& name) {
		printf("getToken\n");
		boost::shared_ptr<Token> token = this->redisProxy->getTokenByName(name);
		if (token == NULL) {
			Token token;
			token.name = name;
			_return = token;
		} else {
			_return = *token;
		}
	}

	void getAllToken(std::vector<Token> & _return) {
		printf("getAllToken\n");
		this->redisProxy->getAllToken(_return);
	}
private:
	shared_ptr<RedisProxy> redisProxy;
};

int main(int argc, char **argv) {
	int port = 9090;
	shared_ptr<RedisProxyServiceHandler> handler(
			new RedisProxyServiceHandler());
	shared_ptr<TProcessor> processor(new RedisProxyServiceProcessor(handler));
	shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
	shared_ptr<TTransportFactory> transportFactory(
			new TBufferedTransportFactory());
	shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

	TSimpleServer server(processor, serverTransport, transportFactory,
			protocolFactory);
	server.serve();
	return 0;
}

