#include <iostream>
#include <cstring>
#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED


using namespace std;
class Motor
{
private:
    char* brand;
    int year;
    int eCapacity;

    void copy(const Motor& other);
    void clear();

public:
    void print();

    Motor(const char* brand = "", int year=0,int eCapacity=0);
    Motor(const Motor& other);
    ~Motor();
    Motor& operator=(const Motor& other);
    bool operator==(const Motor& other);

    friend ostream& operator<<(ostream&,Motor&);
    void setYear(int  new_year);
    void setCap(int new_eCapacity);
    void setBrand(const char* new_Brand);
    const char* getBrand() const {return brand; }
    int getYear() const {return year; }
    int getCap() const {return eCapacity; }
};


#endif // MOTOR_H_INCLUDED
