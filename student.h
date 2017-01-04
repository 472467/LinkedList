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

#ifndef STUDENT_H
#define STUDENT_H

class Student{//an empty class pretty much
	
	public:
		Student();
		char* getName();
		void setName(char*);
		
	private:
		char* name;
	
};

#endif