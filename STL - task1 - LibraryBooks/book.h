#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
using namespace std;

class Book {
  int m_isbn;     //ideally to be std::string
  string m_title;
  string m_author;
  string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  //TODO: default ctor
  Book();
  //TODO: param ctor
  Book(int,string,string,string,int,double,int);
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  int isbn() const;
  string title() const;
  string author() const;
  string publisher() const;
  int year() const;
  double price() const;
  int pages() const;
  //TODO:- display
  void display() const;
  //TODO:- const suffix for immutable function

};
#endif
