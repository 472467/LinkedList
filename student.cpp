#include "student.h"

Student::Student(){
	name = new char[80];
	strcpy(name, "lol");

}

char* Student::getName(){
	return name;
}

void Student::setName(char* n){
	strcpy(name, n);
	std::cout << name << std::endl;
}