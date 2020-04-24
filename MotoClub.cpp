#include<cstring>
#include"../Motorcyclist/Motorcyclist.h"
#include"../../Motor.h"
#include"MotoCLub.h"
#include<cstring>
#include<fstream>
using namespace std;


MotoClub::MotoClub()
{
    this->cName=nullptr;
    this->date=0;
    this->month=0;
    this->year=0;
    this->numMcyclists=0;
    this->capacityOfC=this->reserved_capacityOfC;
    this->Members=new Motorcyclist[this->reserved_capacityOfC];
}

MotoClub::MotoClub(const MotoClub& other)
{
    copy(other);
}
void MotoClub::addMotorcyclist(const Motorcyclist& other)
{
if(this->numMcyclists>=this->capacityOfC)
   {
       resize();
   }
    this->Members[this->numMcyclists]=other;

}

void MotoClub::setCName(char* new_cName)
{
    if(new_cName!=nullptr)
    {
          delete[]cName;
         this->cName=new char[strlen(new_cName)+1];
        strcpy( this->cName,new_cName);
    }
}

  void MotoClub::setDate(int new_date)
  {
      this->date=new_date;
  }
    void MotoClub::setMonth(int new_month)
    {
        this->month=new_month;
    }
    void MotoClub::setYear(int new_year)
    {
        this->year=new_year;
    }
void MotoClub::setNumMcyclists(int new_numMcyclists)
    {
        if(new_numMcyclists!=0)
        {
            this->numMcyclists=new_numMcyclists;
        }
    }

void MotoClub:: copy (const MotoClub& other)
{
   this->cName=new char [strlen(other.cName)+1];
   strcpy(this->cName,other.cName);
   this->date=other.date;
   this->month=other.month;
   this->year=other.year;
   this->numMcyclists=other.numMcyclists;
   this->Members=new Motorcyclist [this->capacityOfC];
   for(int i =0;i<this->numMcyclists;i++)
   {
       this->Members[i]=other.Members[i];
   }

}

void MotoClub::clear()
{
  delete[] cName;
  cName=nullptr;
  delete[] Members;
  Members=nullptr;
}
 MotoClub& MotoClub::operator=(const MotoClub& other)
 {
     if(this!=&other)
     {
         clear();
         copy(other);
     }
     return *this;
 }
 void MotoClub::remove()
 {
    this->numMcyclists--;
    this->Members[this->numMcyclists]=Motorcyclist();

 }
 void MotoClub::resize()
 {
     this->capacityOfC *= 2;
     Motorcyclist* members_2 =new Motorcyclist [this->capacityOfC];
    for(int j=0;j<this->numMcyclists;j++)
  {
    members_2[j]=this->Members[j];
  }
delete[] Members;
Members=members_2;
 }

void MotoClub::saveToFile(const char* file)
{
    fstream out(file, ios::out);

    out <<"Club name :"<<cName << endl;

    out <<"Date of est :"<< date <<"\ "<<month<<"\ "<<year<<endl;

    for (int i = 0; i < numMcyclists; i++)
        {
        out <<"Name:"<<Members[i].getName()<<endl;
        out <<"Age: "<< Members[i].getAge()<<endl;

   for(int j=0;j<Members[i].getNumMotors();j++)
       {
           Members[j].saveToFile(file);

       }
    }

    out.close();
}

MotoClub:: ~MotoClub()
{
    clear();
}
