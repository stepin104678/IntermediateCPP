#include "library.h"

void Library::addBook(int isbn, string title, string author, string publisher, int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(isbn, title, author, year, price, pages));
    
    books.emplace_back(isbn, title, author, publisher, year, price, pages);
}
void Library::displayAll() {
   list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookByISBN(int keyIsbn) {
    list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) {
    list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return true;
   else
     return false;
}
void Library::removeBookbyISBN(int keyIsbn) {
    list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
    list<Book>::iterator iter;
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->price();
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(double minVal, double maxVal) {
  list<Book>::iterator iter;
  int cnt=0;
  for(iter=books.begin();iter!=books.end();++iter)
  {
    if(iter->price() >= minVal && iter->price() <= maxVal)
    {
        cnt++;
    }  
  }
  return cnt;
}
Book& Library::findBookwithMaxPages() {
  list<Book>::iterator iter = books.begin();
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->price() > maxPrice) {
        maxPrice = iter->price();
        maxIter = iter;
    }
    return *maxIter;
}
int Library::count() 
{ 
    return books.size(); 
}
