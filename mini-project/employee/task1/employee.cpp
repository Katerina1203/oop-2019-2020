#include <iostream>
#include <cstring>
#include "employee.h"

using namespace std;

void Employee::copy(const Employee& employee) {

    char* _name=new char[strlen(name) + 1];
    strcpy(_name,name);

	this->name = _name;

	 char* _surname=new char[strlen(surname) + 1];
    strcpy(_surname,surname);

	this->surname = _surname;

	 char* _position=new char[strlen(position) + 1];
    strcpy(_position,position);

	this->position = _position;

}

void Employee::erase() {
	if (this->name != nullptr) {
		delete[] name;
	}

	if (this->surname != nullptr) {
		delete[] surname;
	}

	if (this->position != nullptr) {
		delete[] position;
	}
}

Employee::Employee(){
this->name=nullptr;
this->surname=nullptr;
this->position=nullptr;
}
Employee& Employee::operator =(const Employee& other)
{
    if(&other!=this)
    {
        erase();
        copy(other);
        }
        return *this;
}
Employee::Employee(char* _name, char* _surname, char* _position )
{
    strcpy(this->name,_name);
    strcpy(this->surname,_surname);
    strcpy(this->position,_position);

}
const char* Employee::getName(){return this->name;}
const char* Employee::getSurname(){return this->surname;}
const char* Employee::getPosition(){return this->position;}
void Employee::print() {
    cout<<name<<"  "<<surname<<"  "<<position<<endl;
}
