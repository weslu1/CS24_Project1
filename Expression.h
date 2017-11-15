#ifndef EXPRESSION_H_
#define EXPRESSION_H_
#include "list.h"

class Expression{
 public:
  string infixString();
  string prefixString(Node* n);
  string postfixString();

};

#endif /* EXPRESSION_H_ */
