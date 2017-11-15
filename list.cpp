#include "list.h"
#include <iostream>


using namespace std;

Node* List::getHead()
{
  return head;
}


void List:: expressionToList(string exp){
  Node* parent;
  Node* current = new Node;
  head = current; //access list with this head                                                                                                                                                              
  
  for(int i = 0; i<exp.length(); i++){
    
    if(exp[i] == '('){
      parent = current;//create a parent node to access later                                                                                                                                         
      Node* n = new Node;
      if(current->getLeft() == NULL)
        current->setLeft(n);
      else
        current->setLeft(n);

      current = n;
   }

    


    else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
      {
        if(exp[i] == '+'){
          current->setDataOP(PLUS);
	  current->setNodeType(EXPRESSION);
	}
        if(exp[i] == '-'){
          current->setDataOP(MINUS);
	  current->setNodeType(EXPRESSION);
	}
        if(exp[i] == '*'){
          current->setDataOP(MULT);
	  current->setNodeType(EXPRESSION);
	}
        if(exp[i] == '/'){
          current->setDataOP(DIVIDE);
	  current->setNodeType(EXPRESSION);
	}
      }

    else if(exp[i] == 'x')
      {
        current->getLeft()->setDataVAR('x');
	current->setNodeType(VARIABLE);
      }
    else if(exp[i] == '0' ||exp[i] == '1' ||exp[i] == '2' ||exp[i] == '3' ||exp[i] == '4' ||exp[i] == '5' ||exp[i] == '6' ||exp[i] == '7' ||exp[i] == '8' ||exp[i] == '9')
      {
        if(exp[i] == '0'){
          current->getRight()->setDataVAL(0);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '1'){
          current->getRight()->setDataVAL(1);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '2'){
          current->getRight()->setDataVAL(2);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '3'){
          current->getRight()->setDataVAL(3);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '4'){
          current->getRight()->setDataVAL(4);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '5'){
          current->getRight()->setDataVAL(5);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '6'){
          current->getRight()->setDataVAL(6);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '7'){
          current->getRight()->setDataVAL(7);
	  current->setNodeType(INTEGER);
	}
	if(exp[i] == '8'){
          current->getRight()->setDataVAL(8);
	  current->setNodeType(INTEGER);
	}
        if(exp[i] == '9'){
          current->getRight()->setDataVAL(9);
	  current->setNodeType(INTEGER);
	}
      }

    else if(exp[i] == ')')
      {
        current = parent;
      }
    }

  }

