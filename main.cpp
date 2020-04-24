#include <iostream>
#include<fstream>
#include"MotoCLub.h"
#include"../../Motor.h"
#include"../Motorcyclist/Motorcyclist.h"
using namespace std;

//Така я бях направила в началото  , после реших да отделя различните части в отделни функции
void run()
{
     MotoClub mc;
    char* namec;
    int number_of_members;
    int year;
    int month;
    int date;

    cout<< "What is the name of your Motor club?"<<endl;
    cin>>namec;
    mc.setCName(namec);

    cout<< "What is the date of est of your Motor club (date , month , year)?"<<endl;
    cin>>date;
    cin>>month;
    cin>>year;

    if((date>0&&date<=31)&&(month>0&&month<=12)&&(year>1930&&year<=2020))
    {
        mc.setDate(date);
        mc.setMonth(month);
        mc.setYear(year);
    }

    cout<< "How many members does your Motor club have?"<<endl;
    cin>>number_of_members;
    mc.setNumMcyclists(number_of_members);

    int tmp=number_of_members;

    while(tmp>0)
    {
    Motorcyclist motorC;
    char* name_of_motorC;
    int age;
    int number_of_motors;

    cout<<"Enter your members' information "<<endl;
    cout<<"name: ";
    cin>>name_of_motorC;
    motorC.setName(name_of_motorC);
    cout<<"age: ";
    cin>>age;
    motorC.setAge(age);
    cout<<"Number of motors: ";
    cin>>number_of_motors;
    cout<<"Enter the motors' iformation "<<endl;

    int tmp2=number_of_motors;
    while(tmp2>0)
    {
        Motor motor;
        char* brand ;
        int motor_year;
        int engine_capacity;

        cout<<"brand: ";
        cin>>brand;
        motor.setBrand(brand);
        cout<<"year of production: ";
        cin>>motor_year;
        motor.setYear(motor_year);
        cout<<"engine capacity: ";
        cin>>engine_capacity;
        motor.setCap(engine_capacity);

        motorC.addMotor(motor);

        tmp2--;
    }

    mc.addMotorcyclist(motorC);
    tmp--;
    }
}

//////

void run3(int &tmp2, Motorcyclist &motorC, MotoClub& mc)
{

    do
    {
        Motor motor;
        char* brand ;
        int motor_year;
        int engine_capacity;

        cout<<"brand: ";
        cin>>brand;
        motor.setBrand(brand);
        cout<<"year of production: ";
        cin>>motor_year;
        motor.setYear(motor_year);
        cout<<"engine capacity: ";
        cin>>engine_capacity;
        motor.setCap(engine_capacity);

        motorC.addMotor(motor);

        tmp2--;
    }while(tmp2>0);


}
void run2(char* namec , int number_of_members, int year ,int month,int date,  MotoClub& mc)
{
int tmp=number_of_members;
   do
    {
    Motorcyclist motorC;
    char* name_of_motorC;
    int age;
    int number_of_motors;

    cout<<"Enter your members' information "<<endl;
    cout<<"name: ";
    cin>>name_of_motorC;
    motorC.setName(name_of_motorC);
    cout<<"age: ";
    cin>>age;
    motorC.setAge(age);
    cout<<"Number of motors: ";
    cin>>number_of_motors;
    cout<<"Enter the motors' information "<<endl;
    int tmp2=number_of_motors;

    void run3(int tmp2 ,  Motorcyclist motorC, MotoClub& mc);
     mc.addMotorcyclist(motorC);
     tmp--;

    }while(tmp>0);


}


int main()
{
    MotoClub mc;
    char* namec;
    int number_of_members;
    int year;
    int month;
    int date;

    cout<< "What is the name of your Club?"<<endl;
    cin>>namec;
    mc.setCName(namec);

    cout<< "What is the date of est of your Motor club (date , month , year)?"<<endl;
    cin>>date;
    cin>>month;
    cin>>year;

    if((date>0&&date<=31)&&(month>0&&month<=12)&&(year>1930&&year<=2020))
    {
        mc.setDate(date);
        mc.setMonth(month);
        mc.setYear(year);
    }

    cout<< "How many members does your Motor club have?"<<endl;
    cin>>number_of_members;
    mc.setNumMcyclists(number_of_members);

   void run2(char* namec,int number_of_members,int year,int month,int date, MotoClub& mc);



return 0;
}
