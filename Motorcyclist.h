#ifndef MOTORCYCLIST_H_INCLUDED
#define MOTORCYCLIST_H_INCLUDED
#include"../../Motor.h"


class Motorcyclist
{
private:

    char* name;
    int age ;
    Motor* Motors;
    int numMotors;

    int capacity;
    const int reserved_capacityOfC=1;

    void copy(const Motorcyclist& other);
    void clear();
    void resize();
    void remove();
public:

    void saveToFile(const char* file);
    Motorcyclist(const char* name = "", int age=0,int numMotors=0 , int capacity=0,Motor* pointer=nullptr );
    Motorcyclist(const Motorcyclist& other);
    Motorcyclist& operator = (const Motorcyclist& other);
    ~Motorcyclist();


    void addMotor(const Motor& other);
    void setName(const char* new_name);
    void setAge(int  new_age);
    void setCapacity(int new_capacity);
    void setNumMotors(int new_numMotors);


    friend ostream& operator<<(ostream& ostr, const Motorcyclist& m);
    const char* getName() const { return name; }
    int getAge ()const { return age; }
    int getCapacity() const {return capacity;}
    int getNumMotors() const {return numMotors;}

    void print ();

    bool operator <(const Motorcyclist& other)const ;
    bool operator >(const Motorcyclist& other)const ;
};

#endif // MOTORCYCLIST_H_INCLUDED
