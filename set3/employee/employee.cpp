#include"employee.h"

Employee::Employee(std::string id, std::string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}



std::string Employee::getid()
{

    return m_empid;
}
std::string Employee::getname()
{

    return m_name;

}

double Employee::getsal() const
{

    return m_salary;
}

int Employee::getexp()
{

    return m_salary;
}

void Employee::setexp(int a)
{

    m_exp+=a;
}


void Employee::setsal(double a)
{

    m_salary+=a;
}

void Employee::payroll()
{

    double a=Employee::getsal();
    double b=(double)Employee::getexp();

    setsal(a-b);
}

void Employee::appraisal()
{
    double a=Employee::getsal();

    a=a*1.1;

    setsal(a);

}


