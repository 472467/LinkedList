#include "node.h"

Node::Node(Student* s){
	student = s;
	//nextNode =  new Node(s);

}

void Node::setNext(Node* n){
	nextNode = n;
}

Node* Node::getNext(){
	return nextNode;
}

Student* Node::getStudent(){ 
	return student;
}

//~Node() //deconstructor (10 points)