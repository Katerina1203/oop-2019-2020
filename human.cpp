#include <iostream>
#include<cstring>
#include"human.h"
using namespace std;
Human(){
age=0;
}
Human::Human(string NewName , string NewSurname, int NewAge){
name=NewName;
surname=NewSurname;
age=NewAge;
}
void Human::printHuman(){
cout<<getline(name , sizeof(name))<<" "<<getline(surname,sizeof(surname))<<" "<<age<<" ";
}
Student::Student():Human(){
fn=0;
}
Student::Student(int NewFn , string NewSpec,string NewName , string NewSurname, int NewAge):Human (string NewName , string NewSurname, int NewAge){
fn=NewFn;
spec=NewSpec;
}
void Student::printStudent():printHuman(){
cout<<fn<<" "<<getline(spec,sizeof(spec))<<end;
}
