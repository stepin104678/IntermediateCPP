#include "book.h"

Book::Book():m_isbn(0),m_title(""),m_author(""),m_publisher(""),m_year(0),m_price(0.0),m_pages(0)
{
}

Book::Book(int a,string b,string c,string d,int e,double f,int g):m_isbn(a),m_title(b),m_author(c),m_publisher(d),m_year(e),m_price(f),m_pages(g)
{    
}

int Book::isbn() const
{
    return m_isbn;
}
string Book::title() const
{
    return m_title;
}
string Book::author() const
{
    return m_author;
}
string Book::publisher() const
{
    return m_publisher;
}
int Book::year() const
{
    return m_year;
}
double Book::price() const
{
    return m_price;
}
int Book::pages() const
{
    return m_pages;
}
void Book::display() const
{
    cout<<m_isbn<<" "<<m_author<<" "<<m_publisher<<" "<<m_year<<" "<<m_price<<" "<<m_pages<<'\n';
}
