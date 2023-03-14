#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include "Titan.h"
#include <string>


class Employee : public Titan {
  public:

    Employee(int id, int age, std::string name, int hire_year, std::string department);
    ~Employee();

    void SetDepartment(std::string);
    std::string GetDepartment();
    int GetHireYear();
    std::string GetBio();
    
  
  private:
    std::string department_;
    int hire_year_;
};

void Employee_main();

#endif