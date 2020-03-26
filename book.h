#ifndef BOOK_H_INCLUDED
#include <cstring>
#define BOOK_H_INCLUDED

class Book{
private:

char* title;
char* author;
int ISBN[14];
int nPages;
string date;
char* addBy;

public:
    Book();
    Book(const Book& other);
    Book& operator=(const Book& other);
    ~Book();
   // void print();
    void copy(const Book& other);
    void erase();
};

#endif // BOOK_H_INCLUDED
