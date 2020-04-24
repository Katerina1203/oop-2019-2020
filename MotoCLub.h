#include"../Motorcyclist/Motorcyclist.h"
#include"../../Motor.h"
#ifndef MOTOCLUB_H_INCLUDED
#define MOTOCLUB_H_INCLUDED
class MotoClub
{
private:
char* cName;
int date;
int month;
int year;
int capacityOfC;
int numMcyclists;
const int reserved_capacityOfC=5;
Motorcyclist* Members;


  void copy(const MotoClub& other);
  void clear();
  void resize();
  void remove();
public:


    MotoClub();
    MotoClub(const MotoClub& other);
    MotoClub& operator=(const MotoClub& other);
    ~MotoClub();

    Motorcyclist& getMotorcyclist (int i);
    void setCName(char* new_cName);
    void setNumMcyclists(int new_numMcyclists);
    void setDate(int new_date);
    void setMonth(int new_month);
    void setYear(int new_year);

    char* getCName() {return this->cName;};
    int getDate() {return this->date;};
    int getMonth() {return this->month;};
    int getYear() {return this->year;};
    int getNumMcyclists() {return this->numMcyclists;};


    void addMotorcyclist(const Motorcyclist& other);
    void saveToFile(const char* file);
};


#endif // MOTOCLUB_H_INCLUDED
