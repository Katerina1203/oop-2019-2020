#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#define MAX_SIZE 30
class Employee
{
private:
    char* name;
    char* surname;
    char* position;


    void copy(const Employee& e);
    void erase();
public:

    Employee();
    Employee(char* _name,char* _surname , char* _position);
    Employee& operator=(const Employee& other);
    const char* getName();
    const char* getSurname();
    const char* getPosition();
    void print ();
};


#endif // EMPLOYEE_H
