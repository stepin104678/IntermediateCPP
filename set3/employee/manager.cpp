#include"manager.h"

Manager::Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp),m_projCode(code),m_reportees(reprtees){}


void Manager::payroll()
{
    double a=Employee::getsal();
    double b=(double)Employee::getexp();

    setsal(+(a-b));

}

void Manager::appraisal()
{
    double a=Employee::getsal();

    a=a*1.1;

    setsal(a);

}

void Manager::display()
{

    std::cout<<Employee::getname()<<" "<<Employee::getid()<<" "<<Employee::getsal()<<" "<<Employee::getexp();


}

void Employee::display()
{

    std::cout<<Employee::getname()<<" "<<Employee::getid()<<" "<<Employee::getsal()<<" "<<Employee::getexp();


}




