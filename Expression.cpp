#include "Expression.h"
#include <iostream>

using namespace std;

s#include "Expression.h"
#include <iostream>

using namespace std;

Expression::Expression(){
  string in = new string;
  string pre = new string;
  string post = new string;
  n = NULL;
}

string Expression::infixString(List l, string in){
  n = l.getHead();
  
}


string Expression::prefixString(List l, string pre){
  n = l.getHead();
  if(n != NULL){
    pre += (n ->getData());
    prefixString(n ->getLeft(), pre);
    prefixString(n ->getRight(), pre);
  }
  return pre;
  
}

string Expression::postfixString(List l, string post){
  n = l.getHead();
  if (n != NULL){
    postfixString(n ->getLeft(), post);
    postfixString(n ->getRight(), post);
    post += (n ->getData());
  }
  return post;


}

