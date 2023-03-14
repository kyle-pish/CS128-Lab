// Student.cpp (for implementing / defining methods of Student class)

#include <iostream>
#include "Student.h"


// Define the constructor.
// Calls the base class (Titan) constructor to
// initialize inherited private attributes.
Student::Student(int new_id, int new_age, std::string new_name) : Titan(new_id, new_age, new_name) {
  // default values for the remaining attributes
  this->major_ = "Undeclared";
  this->gpa_ = -1.0;  // invalid value until a real GPA is set later

  // declare the partially filled array on the heap
  this->extracurriculars_ = new std::string[20];
  this->ec_capacity_ = 20;
  // our partially filled array starts empty
  this->ec_size_ = 0;
}


// Define the destructor
Student::~Student() {
  // Clean up (deallocate) the extracurriculars list
  // on the heap.
  delete[] this->extracurriculars_;
  // Don't *have* to null the pointer, since this
  // whole object is being destroyed and we couldn't
  // mistakenly reuse the now-dangling pointer.
  // But you can if you want.
  this->extracurriculars_ = 0;

  //std::cout << "The destructor was called on the object with name: " << this->GetName() << std::endl;
}

// Getter, Setter methods
std::string Student::GetMajor() {
  return this->major_;
}

void Student::SetMajor(std::string new_major) {
  this->major_ = new_major;
}

double Student::GetGPA() {
  return this->gpa_;
}

void Student::SetGPA(double new_gpa) {
  this->gpa_ = new_gpa;
}
