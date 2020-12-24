#include "book.h"
#include "library.h"
using namespace std;
int main()
{
  Library l;
  l.addBook(120,"ABC","Potter","XYZ",1999,2345.67,565);
  l.addBook(123,"lkj","uhd","yui",2018,736.98,256);
  l.addBook(136,"tyu","ghj","qwe",2012,9456.78,1289);
  cout<<l.findAveragePrice()<<'\n';
  cout<<l.isBookFound(120)<<'\n';
  cout<<l.countBooksInPriceRange(500.00,2000.00)<<'\n';
  l.removeBookbyISBN(136);
  l.displayAll();


}