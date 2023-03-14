// Titan.cpp (for implementing / defining methods of Titan class)

#include <iostream>
#include "Titan.h"


Titan::Titan(int id, int age, std::string name) : name_(name) {
  this->id_ = id;
  this->age_ = age;
  this->name_ = name;
  this->nemesis_ = "no one";
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
  return this->name_.GetNameLFM();
}


void Titan::SetName(std::string new_name) {
  this->name_ = FullName(new_name);
}

//Returns an std::string in the format "<name_ (first, middle, last)> glares silently at <nemesis_>."
void Titan::GlareAtNemesis() {
  std::cout << this->name_.GetNameFML() << " glares silently at " << this->nemesis_ << "." << std::endl;
}

void Titan::SetNemesis(std::string new_nemesis) {
  this->nemesis_ = new_nemesis;
}

//Sets a the name of a Titan object as a nemesis
void Titan::SetNemesisTitan(Titan& new_nemesis) {
  this->nemesis_ = new_nemesis.GetName();
}