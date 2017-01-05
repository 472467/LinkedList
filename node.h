#include <iostream>
#include <string>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iterator>
#include <iomanip>

#include "student.h"

#ifndef NODE_H
#define NODE_H

class Node{//has a student and a pointer to the next Node
	
	public:
		Node(Student*);
		~Node();
		Node* getNext();
		void setNext(Node*);//sets next node
		Student* getStudent();//
				
	private:
		Student* student;
		Node* nextNode;
	
};


#endif