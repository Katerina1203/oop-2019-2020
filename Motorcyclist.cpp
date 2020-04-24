#include<iostream>
#include<fstream>
#include<cstring>
#include"Motorcyclist.h"
#include"../../Motor.h"

using namespace std;

Motorcyclist:: Motorcyclist(const char* name ,int numMotors, int capacity, int age,Motor* pointer)

  :name(new char[strlen(name) + 1])
  ,age(age)
  ,numMotors(numMotors)
  ,capacity(capacity)
  ,Motors(pointer)

  {
      strcpy(this->name, name);
  }
void Motorcyclist:: copy (const Motorcyclist& other)
{
 this->name=new char [strlen(other.name)+1];
   strcpy(this->name,other.name);
   this->age=other.age;
   this->numMotors=other.numMotors;
   this->capacity=other.capacity;

   this->Motors=new Motor [this->capacity];
   for(int i =0;i<this->numMotors;i++)
   {
       this->Motors[i]=other.Motors[i];
   }

}

void Motorcyclist::clear()
{
  delete[] name;
  name=nullptr;
  delete[] Motors;
  Motors=nullptr;
}

void Motorcyclist::resize(){
this->capacity *= 2;
Motor* Motors2 =new Motor [this->capacity];
for(int j=0;j<this->numMotors;j++)
{
    this->Motors[j]=Motors2[j];
}
delete[] Motors2;
}
void Motorcyclist:: remove()
{
    this->Motors[this->numMotors-1]=Motor();
    this->numMotors--;
}
void Motorcyclist::addMotor(const Motor& other)
{
   if(this->numMotors>=this->capacity)
   {
       resize();
   }
    this->Motors[this->numMotors]=other;
    this->numMotors++;
}
Motorcyclist::Motorcyclist(const Motorcyclist& other)
{
   copy(other);
}

Motorcyclist& Motorcyclist::operator=(const Motorcyclist& other)
{
    if(this!=&other)
    {
        clear();
     copy(other);
    }
    return *this;
}
void Motorcyclist:: print()
{
cout<<(*this);
}
Motorcyclist::~Motorcyclist()
{
clear();
}
 ostream& operator<<(ostream& ostr, const Motorcyclist& m)
{
    return ostr << (m.name?m.name:"<unknown>") << " age: " << m.age << endl;
    for (int i = 0; i < m.numMotors; i++)
        {ostr << i << ": " << m.Motors[i] <<endl;} ;

}


void Motorcyclist:: setAge(int new_age)
{
    if(new_age>=18&&new_age<=90)
    {
       this-> age=new_age;
    }

}
void Motorcyclist:: setCapacity (int new_capacity)
{
    if(new_capacity>0)
    {
      this->capacity=new_capacity;
    }
}
void Motorcyclist:: setNumMotors(int new_numMotors)
{
    if(new_numMotors>0)
    {
      this->numMotors=new_numMotors;
    }
}

void Motorcyclist:: setName(const char* new_name)
{
    if(new_name!=nullptr)
    {
        delete[]name;
       this-> name=new char[strlen(new_name)+1];
        strcpy(this->name,new_name);
    }

}

 bool Motorcyclist:: operator<(const Motorcyclist& other)const
 {
    return this->Motors<other.Motors;
 }

bool Motorcyclist:: operator>(const Motorcyclist& other)const
 {
    return this->Motors>other.Motors;
 }


 void Motorcyclist::saveToFile(const char* file)
{
    fstream out(file, ios::out);

    out <<"Name of member:"<<name<< endl;

    out <<"Age of member:"<< age <<endl;
    for (int i = 0; i < numMotors; i++)
        {
        out <<"Brand:"<<Motors[i].getBrand()<<endl;
        out <<"Year of production: "<< Motors[i].getYear()<<endl;
        out <<"Engine capacity: "<< Motors[i].getCap()<<endl;
        }

    out.close();
}





