#include "Expression.h"
#include <iostream>

using namespace std;

string Expression::infixString(){
}


string Expression::prefixString(Node* n){
       
  if(n->getNodeType() == VARIABLE){

    return "x";
  }

  if(n->getNodeType() == INTEGER){

    return n->int_to_string();
  }

  if(n->getNodeType() == EXPRESSION){

    Node* L = n->getLeft();
    Node* R = n->getRight();
    n->print_operator();
    prefixString(L);
    prefixString(R);

   
  }
}

string Expression::postfixString(){


}
