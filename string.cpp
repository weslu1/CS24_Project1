
#include "string.h"
#include <iostream>

using namespace std;

int main(){

  string n;
  cout<<"Enter a balanced expression: "<<endl;
  cin>>n;

  List* list = new List;
  list->expressionToList(n);

  int a;
  cout<<"Enter 1 for infix, 2 for prefix, 3 for postfix: "<<endl;
  cin>>a;


  Expression* Ex = new Expression;

  if(a == 1)
    cout<< Ex->infixString();
  else if(a==2)
    cout<<Ex->prefixString(list->getHead());
  else if(a==3)
    cout<<Ex->postfixString();
  else
    cout<<"not a valid number"<<endl;

  return 0;

}





