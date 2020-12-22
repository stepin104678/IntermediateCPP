#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include<string>
#include<iostream>

class IEmployee
{
  public:
  virtual void payroll()=0;
  virtual void appraisal()=0;
};

class Employee:public IEmployee {
 protected:
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  void appraisal();
  void payroll();
  Employee(std::string id, std::string name, double salary,int exp);//exp-expenses
  virtual void display();
  //get & set
  std::string getid();
  std::string getname();
  double getsal() const;
  void setsal(double);
  int getexp();
  void setexp(int);


};

#endif

