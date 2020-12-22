#include"trainee.h"

Trainee::Trainee(std::string id, std::string name, double salary,int exp,std::string trackcode,double score):Employee(id,name,salary,exp),m_track(trackcode),score(score){}


void Trainee::payroll()
{
    double a=Employee::getsal();
    double b=(double)Employee::getexp();

    setsal(a-b);

}

void Trainee::appraisal()
{
    double a=Employee::getsal();

    a=a*1.1;

    setsal(a);

}

void Trainee::display()
{

    std::cout<<Employee::getname()<<" "<<Employee::getid()<<" "<<Employee::getsal()<<" "<<Employee::getexp();


}

