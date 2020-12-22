#include"engineer.h"

Engineer::Engineer(std::string id, std::string name, double salary,int exp,int code):Employee(id,name,salary,exp),m_projCode(code){}


void Engineer::payroll()
{
    double a=Employee::getsal();
    double b=(double)Employee::getexp();

    setsal(a-b);

}

void Engineer::appraisal()
{
    double a=Employee::getsal();

    a=a*1.1;

    setsal(a);

}

void Engineer::display()
{

    std::cout<<Employee::getname()<<" "<<Employee::getid()<<" "<<Employee::getsal()<<" "<<Employee::getexp();


}

