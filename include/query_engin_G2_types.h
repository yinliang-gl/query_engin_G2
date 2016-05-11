/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef query_engin_G2_TYPES_H
#define query_engin_G2_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct QueryType {
  enum type {
    GET_USER = 0,
    ADD_USER = 1,
    GET_WORD = 2,
    ADD_WORD = 3,
    GET_TOKEN = 4,
    ADD_TOKEN = 5,
    GET_ALL_USER = 6,
    GET_ALL_WORD = 7,
    GET_ALL_TOKEN = 8
  };
};

extern const std::map<int, const char*> _QueryType_VALUES_TO_NAMES;

class User;

class Word;

class Token;

class TokenItem;

class Request;

class Response;

typedef struct _User__isset {
  _User__isset() : id(false), name(false) {}
  bool id :1;
  bool name :1;
} _User__isset;

class User {
 public:

  User(const User&);
  User& operator=(const User&);
  User() : id(0), name() {
  }

  virtual ~User() throw();
  int64_t id;
  std::string name;

  _User__isset __isset;

  void __set_id(const int64_t val);

  void __set_name(const std::string& val);

  bool operator == (const User & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const User &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const User & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(User &a, User &b);

inline std::ostream& operator<<(std::ostream& out, const User& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Word__isset {
  _Word__isset() : id(false), name(false) {}
  bool id :1;
  bool name :1;
} _Word__isset;

class Word {
 public:

  Word(const Word&);
  Word& operator=(const Word&);
  Word() : id(0), name() {
  }

  virtual ~Word() throw();
  int64_t id;
  std::string name;

  _Word__isset __isset;

  void __set_id(const int64_t val);

  void __set_name(const std::string& val);

  bool operator == (const Word & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const Word &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Word & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Word &a, Word &b);

inline std::ostream& operator<<(std::ostream& out, const Word& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Token__isset {
  _Token__isset() : name(false), tokenItemVetor(false) {}
  bool name :1;
  bool tokenItemVetor :1;
} _Token__isset;

class Token {
 public:

  Token(const Token&);
  Token& operator=(const Token&);
  Token() : name() {
  }

  virtual ~Token() throw();
  std::string name;
  std::vector<TokenItem>  tokenItemVetor;

  _Token__isset __isset;

  void __set_name(const std::string& val);

  void __set_tokenItemVetor(const std::vector<TokenItem> & val);

  bool operator == (const Token & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(tokenItemVetor == rhs.tokenItemVetor))
      return false;
    return true;
  }
  bool operator != (const Token &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Token & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Token &a, Token &b);

inline std::ostream& operator<<(std::ostream& out, const Token& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TokenItem__isset {
  _TokenItem__isset() : userId(false), wordId(false), postion(false), length(false) {}
  bool userId :1;
  bool wordId :1;
  bool postion :1;
  bool length :1;
} _TokenItem__isset;

class TokenItem {
 public:

  TokenItem(const TokenItem&);
  TokenItem& operator=(const TokenItem&);
  TokenItem() : userId(0), wordId(0), postion(0), length(0) {
  }

  virtual ~TokenItem() throw();
  int64_t userId;
  int64_t wordId;
  int32_t postion;
  int32_t length;

  _TokenItem__isset __isset;

  void __set_userId(const int64_t val);

  void __set_wordId(const int64_t val);

  void __set_postion(const int32_t val);

  void __set_length(const int32_t val);

  bool operator == (const TokenItem & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(wordId == rhs.wordId))
      return false;
    if (!(postion == rhs.postion))
      return false;
    if (!(length == rhs.length))
      return false;
    return true;
  }
  bool operator != (const TokenItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TokenItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TokenItem &a, TokenItem &b);

inline std::ostream& operator<<(std::ostream& out, const TokenItem& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Request__isset {
  _Request__isset() : get_user_user_id(false), add_user_user(false), get_word_word_id(false), add_word_word(false), add_token_token(false), get_token_token_name(false) {}
  bool get_user_user_id :1;
  bool add_user_user :1;
  bool get_word_word_id :1;
  bool add_word_word :1;
  bool add_token_token :1;
  bool get_token_token_name :1;
} _Request__isset;

class Request {
 public:

  Request(const Request&);
  Request& operator=(const Request&);
  Request() : querytype((QueryType::type)0), get_user_user_id(0), get_word_word_id(0), get_token_token_name() {
  }

  virtual ~Request() throw();
  QueryType::type querytype;
  int64_t get_user_user_id;
  User add_user_user;
  int64_t get_word_word_id;
  Word add_word_word;
  Token add_token_token;
  std::string get_token_token_name;

  _Request__isset __isset;

  void __set_querytype(const QueryType::type val);

  void __set_get_user_user_id(const int64_t val);

  void __set_add_user_user(const User& val);

  void __set_get_word_word_id(const int64_t val);

  void __set_add_word_word(const Word& val);

  void __set_add_token_token(const Token& val);

  void __set_get_token_token_name(const std::string& val);

  bool operator == (const Request & rhs) const
  {
    if (!(querytype == rhs.querytype))
      return false;
    if (__isset.get_user_user_id != rhs.__isset.get_user_user_id)
      return false;
    else if (__isset.get_user_user_id && !(get_user_user_id == rhs.get_user_user_id))
      return false;
    if (__isset.add_user_user != rhs.__isset.add_user_user)
      return false;
    else if (__isset.add_user_user && !(add_user_user == rhs.add_user_user))
      return false;
    if (__isset.get_word_word_id != rhs.__isset.get_word_word_id)
      return false;
    else if (__isset.get_word_word_id && !(get_word_word_id == rhs.get_word_word_id))
      return false;
    if (__isset.add_word_word != rhs.__isset.add_word_word)
      return false;
    else if (__isset.add_word_word && !(add_word_word == rhs.add_word_word))
      return false;
    if (__isset.add_token_token != rhs.__isset.add_token_token)
      return false;
    else if (__isset.add_token_token && !(add_token_token == rhs.add_token_token))
      return false;
    if (__isset.get_token_token_name != rhs.__isset.get_token_token_name)
      return false;
    else if (__isset.get_token_token_name && !(get_token_token_name == rhs.get_token_token_name))
      return false;
    return true;
  }
  bool operator != (const Request &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Request & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Request &a, Request &b);

inline std::ostream& operator<<(std::ostream& out, const Request& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Response__isset {
  _Response__isset() : get_user_user(false), add_user_user_id(false), add_word_word_id(false), get_word_word(false), get_token_token(false), get_all_user_user_list(false), get_all_word_word_list(false), get_all_token_token_list(false) {}
  bool get_user_user :1;
  bool add_user_user_id :1;
  bool add_word_word_id :1;
  bool get_word_word :1;
  bool get_token_token :1;
  bool get_all_user_user_list :1;
  bool get_all_word_word_list :1;
  bool get_all_token_token_list :1;
} _Response__isset;

class Response {
 public:

  Response(const Response&);
  Response& operator=(const Response&);
  Response() : querytype((QueryType::type)0), add_user_user_id(0), add_word_word_id(0) {
  }

  virtual ~Response() throw();
  QueryType::type querytype;
  User get_user_user;
  int64_t add_user_user_id;
  int64_t add_word_word_id;
  Word get_word_word;
  Token get_token_token;
  std::vector<User>  get_all_user_user_list;
  std::vector<Word>  get_all_word_word_list;
  std::vector<Token>  get_all_token_token_list;

  _Response__isset __isset;

  void __set_querytype(const QueryType::type val);

  void __set_get_user_user(const User& val);

  void __set_add_user_user_id(const int64_t val);

  void __set_add_word_word_id(const int64_t val);

  void __set_get_word_word(const Word& val);

  void __set_get_token_token(const Token& val);

  void __set_get_all_user_user_list(const std::vector<User> & val);

  void __set_get_all_word_word_list(const std::vector<Word> & val);

  void __set_get_all_token_token_list(const std::vector<Token> & val);

  bool operator == (const Response & rhs) const
  {
    if (!(querytype == rhs.querytype))
      return false;
    if (__isset.get_user_user != rhs.__isset.get_user_user)
      return false;
    else if (__isset.get_user_user && !(get_user_user == rhs.get_user_user))
      return false;
    if (__isset.add_user_user_id != rhs.__isset.add_user_user_id)
      return false;
    else if (__isset.add_user_user_id && !(add_user_user_id == rhs.add_user_user_id))
      return false;
    if (__isset.add_word_word_id != rhs.__isset.add_word_word_id)
      return false;
    else if (__isset.add_word_word_id && !(add_word_word_id == rhs.add_word_word_id))
      return false;
    if (__isset.get_word_word != rhs.__isset.get_word_word)
      return false;
    else if (__isset.get_word_word && !(get_word_word == rhs.get_word_word))
      return false;
    if (__isset.get_token_token != rhs.__isset.get_token_token)
      return false;
    else if (__isset.get_token_token && !(get_token_token == rhs.get_token_token))
      return false;
    if (__isset.get_all_user_user_list != rhs.__isset.get_all_user_user_list)
      return false;
    else if (__isset.get_all_user_user_list && !(get_all_user_user_list == rhs.get_all_user_user_list))
      return false;
    if (__isset.get_all_word_word_list != rhs.__isset.get_all_word_word_list)
      return false;
    else if (__isset.get_all_word_word_list && !(get_all_word_word_list == rhs.get_all_word_word_list))
      return false;
    if (__isset.get_all_token_token_list != rhs.__isset.get_all_token_token_list)
      return false;
    else if (__isset.get_all_token_token_list && !(get_all_token_token_list == rhs.get_all_token_token_list))
      return false;
    return true;
  }
  bool operator != (const Response &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Response & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Response &a, Response &b);

inline std::ostream& operator<<(std::ostream& out, const Response& obj)
{
  obj.printTo(out);
  return out;
}



#endif