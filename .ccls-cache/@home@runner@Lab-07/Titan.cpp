// Titan.cpp (for implementing / defining methods of Titan class)

#include <iostream>
#include "Titan.h"


Titan::Titan(int id, int age, std::string name) {
  this->id_ = id;
  this->age_ = age;
  this->name_ = name;
}


int Titan::GetId() {
  return this->id_;
}


void Titan::SetId(int new_id) {
  this->id_ = new_id;
}


int Titan::GetAge() {
  return this->age_;
}


void Titan::SetAge(int new_age) {
  this->age_ = new_age;
}


std::string Titan::GetName() {
  return this->name_;
}


void Titan::SetName(std::string new_name) {
  this->name_ = new_name;
}
