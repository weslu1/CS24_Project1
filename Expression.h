#ifndef EXPRESSION_H_
#define EXPRESSION_H_
#include "list.h"

class Expression{
 public:
  string infixString(List l, string in);
  string prefixString(List l, string pre);
  string postfixString(List l, string post);

};

#endif /* EXPRESSION_H_ */
