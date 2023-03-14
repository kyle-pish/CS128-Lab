#include <iostream>
#include "Employee.h"
#include "Titan.h"

//Constructor that takes an int id, age, and name for the Titan base class, and a hire year and department name for the Employee subclass.
Employee::Employee(int id, int age, std::string name, int hire_year, std::string department) : Titan(id, age, name) {
  this->hire_year_ = hire_year;
  this->department_ = department;
}

Employee::~Employee() {
}

//Takes as input an std::string and sets it as the department_ attribute.
void Employee::SetDepartment(std::string department) {
  this->department_ = department;
}

//Returns the std::string department_ attribute.
std::string Employee::GetDepartment() {
  return this->department_;
}

//Returns the int hire_year_ attribute.
int Employee::GetHireYear() {
  return this->hire_year_;
}

//Returns a brief std::string bio in the format of "<name_> has been working at IWU since <hire_year_> in the <department_> department."
std::string Employee::GetBio() {
  std::string bio_part_1 = " has been working at IWU since ";
  std::string bio_part_2 = " in the ";
  std::string bio_part_3 = " department.";

  return this->GetName() + bio_part_1 + std::to_string(this->hire_year_) + bio_part_2 + this->department_ + bio_part_3; 
}

//Tests the Employee class by creating three Employee objects and printing their GetBio() method outputs.
void Employee_main() {
  Employee George(1, 38, "George Virgil", 2001, "Physics");
  Employee Lana(2, 41, "Lana Yetfield", 1996, "English");
  Employee Randy(3, 62, "Randy Marcus", 1982, "Anthropology");

  std::cout << George.GetBio() << std::endl;
  std::cout << Lana.GetBio() << std::endl;
  std::cout << Randy.GetBio() << std::endl;

}