/* EXCELLENT PROGRAM THAT IS WORTH FULL MARKS 
DOES LINKED LISTS AND WHAT NOT
WRITTEN BY BRENDAN*/

#include "linkedList.h"

//using namespace std;



int main(){
	
	std::cout<< "TEST" << std::endl;
	
	
	
	Student* s = new Student();
	Node* n = new Node(s);
	
	std::cout << s->getName() << std::endl;//works
	

	Student* s2 = new Student();
	s2->setName("not funny kiddo");//works
	
	
	
	//std::cin.ignore();
	
	
	Node* n2 = new Node(s2);
	
	Student* s3 = new Student();
	
	
	s3->setName("howdy pardner");
	
	Node* n3 = new Node(s3);
	n3->setNext(n2);
	n->setNext(n3);
	
	
	
	
	std::cout << ((n->getNext())->getStudent())->getName() << std::endl;//all these work
	
	n->setNext(n2);
	 
	std::cout << ((n->getNext())->getStudent())->getName()<<std::endl;
	
	Student* deadStudent = n->getStudent();
	
	std:: cout <<((n->getStudent())->getName()) << std::endl;
	
	delete n;
	
	std::cout <<(deadStudent->getName());
	
	
	//return 0;
}