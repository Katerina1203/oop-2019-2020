
#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include<cstring>
using namespace std;

class Human {
public:
string name ;
string surname ;
int age;

Human();
Human(string NewName , string NewSurname, int NewAge);
void printHuman();
};
class Student : public Human {
public:
int fn;
string spec;
Student():Human();
Student(int NewFn , string NewSpec,string NewName , string NewSurname, int NewAge):Human(string NewName , string NewSurname, int NewAge);
void printStudent():printHuman();
};

#endif // HUMAN_H_INCLUDED
