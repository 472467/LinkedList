/* EXCELLENT PROGRAM THAT IS WORTH FULL MARKS 
DOES LINKED LISTS AND WHAT NOT
WRITTEN BY BRENDAN*/

#include "linkedList.h"

//using namespace std;



int main(){
	
	std::cout<< "TEST" << std::endl;
	
	
	
	Student* s = new Student();
	Node* n = new Node(s);
	
	std::cout << s->getName() << std::endl;
	
	char* lul = new char[120];
	strcpy(lul, "not funny kiddo");
	

	Student* s2 = new Student();
	s2->setName(lul);
	
	std::cout << s2->getName() << std::endl;
	
	
	
	//std::cin.ignore();
	
	
	Node* n2 = new Node(s2);
	
	Student* s3 = new Student();
	
	strcpy(lul, "howdy pardner");
	s3->setName(lul);
	
	Node* n3 = new Node(s3);
	n3->setNext(n2);
	Node* temp = n->getNext();
	Student* tmpStudent = temp->getStudent();
	
	
	
	std::cout << tmpStudent->getName() << std::endl;
	
	n->setNext(n3);
	 
	std::cout << ((n->getNext())->getStudent())->getName()<<std::endl;
	
	std::cin.ignore();
	
	
	
	//return 0;
}