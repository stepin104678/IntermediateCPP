#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include<iostream>
#include<list>
#include<iterator>

using namespace std;
class Library {
  //Book b;
  //Book b1(120,"ABC","Potter","XYZ",1999,2345.67,565);
  list<Book> books;
  public:
  void addBook(int, string, string, string, int, double, int);
  void removeBookByISBN(int);
  void displayAll();
  Book* findBookByISBN(int);
  bool isBookFound(int);
  void removeBookbyISBN(int);
  double findAveragePrice();
  int countBooksInPriceRange(double, double);
  Book& findBookwithMaxPages();
  int count();
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};

#endif
