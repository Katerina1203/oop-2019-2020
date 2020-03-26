#include <iostream>
#include<cstring>
#include "book.h"
using namespace std;
Book::Book(){
this->title=nullptr;
this->author=nullptr;
this->ISBN[0]={'/0'};
this->nPages=0;
this->addBy=nullptr;
}

void Book::copy(const Book& other) {

    char* other.title=new char[strlen(this->title) + 1];
    strcpy(this->title,other.title);

	this->title =other.title;

	 char* other.author=new char[strlen(this->author) + 1];
    strcpy(this->author,other.author);
    this->author=other.author;

    strcpy(this->ISBN,other.ISBN);
	this->ISBN =other.ISBN;

	this->nPages=other.nPages;

	strcpy(this->date,other.date);
	this->date=other.date;


 char* other.assBy=new char[strlen(this->addBy) + 1];
    strcpy(this->addBy,other.addBy);
    this->addBy=other.addBy;

}
void Book::erase() {
	if (this->title != nullptr) {
		delete[] title;
	}

	if (this->author != nullptr) {
		delete[] author;
	}

    if (this->addBy != nullptr) {
		delete[] addBy;
	}
}

Book::Book(const Book& other)
{
strcpy(this->title,title.other);
strcpy(this->author,other.author);
strcpy(this->ISBN,other.ISBN;
this->nPages=other.nPages;
strcpy(this->date,other.name);
strcpy(this->addBy,other.addBy);
}
Book& Book::operator =(const Book& other)
{
    if(&other!=this)
    {
        erase();
        copy(other);
        }
        return *this;
}
Book::~Book()
{

    delete [] title;
    title=nullptr;

    delete [] author;
    author=nullptr;
       delete [] addBy;
    addBy=nullptr;
}


