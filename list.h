
#include "node.h"
#include <iostream>
using namespace std;

class List{

 public:

  void expressionToList(string exp);
  Node* getHead();

 private:
  Node* head;
};




