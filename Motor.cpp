#include<iostream>
#include<cstring>
#include "Motor.h"
using namespace std;

Motor::Motor(const char* brand , int year,int eCapacity)
     :brand(new char[strlen(brand) + 1])
     , year(year)
     , eCapacity(eCapacity)
{
     strcpy(this->brand, brand);
}

void Motor::copy(const Motor& other)
{
   this->brand=new char[strlen(other.brand)+1];
   strcpy(this->brand,other.brand);
     this->year=other.year;
     this->eCapacity=other.eCapacity;

}
void Motor::clear()
{
  delete[] brand;
  brand=nullptr;
}
Motor::Motor(const Motor& other)
{
    copy(other);
}
void Motor:: print()
{
cout<<(*this);
}
Motor& Motor:: operator = (const Motor& other)
{
    if(this != &other)
    {
     clear();
     copy(other);
    }
    return *this;
}
ostream& operator<<(ostream& ostr, Motor& motor) {
    ostr << (motor.brand? motor.brand: "<unknown>") << " year of production: " << motor.year << " engine capacity: " <<motor.eCapacity;
    return ostr;
}
bool Motor:: operator == (const Motor& other)
{
    if(brand==other.brand&&year==other.year&&eCapacity==other.eCapacity)
    {

        return true ;
    }
    return false;
}

void Motor:: setYear(int new_year)
{
    if(new_year>0)
    {
        year=new_year;
    }

}
void Motor:: setCap(int new_eCapacity)
{
    if(new_eCapacity>0)
    {
        eCapacity=new_eCapacity;
    }

}
void Motor:: setBrand(const char* new_brand)
{
    if(new_brand!=nullptr)
    {
        delete[]brand;
        brand=new char[strlen(new_brand)+1];
        strcpy(brand,new_brand);
    }

}

Motor::~Motor()
{
clear();
}
