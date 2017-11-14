#include <Expression.h>
#include <List.h>
#include <List.cpp>
#include <iostream>

using namespace std;

String Expression::infixString(){
}


String Expression::prefixString(node n){

	If (n.getNodeType == VARIABLE){

		return "x";
	}

	If (n.getNodeType == INTEGER){

		return n.int_to_string();
	}

	If (n.getNodeType == EXPRESSION){

		node L = n.getLeft();
		node R = n.getRight();
		n.printOperator();
		prefixString(L);
		prefixString(R);
	}
}

String Expression::postfixString(){


}
