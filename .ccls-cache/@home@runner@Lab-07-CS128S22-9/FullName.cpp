#include <iostream>
#include "FullName.h"

//Constructor that takes an std::string first name, a char middle initial, and an std:;string last name and sets them as the corresponding attributes.
FullName::FullName(std::string first_name, char middle_initial, std::string last_name) {
  this->first_name_ = first_name;
  this->last_name_ = last_name;
  this->middle_initial_ = middle_initial;
}

//Constructor that takes std::string first and last names, setting them as the corresponding attributes, and setting the middle initial as the char '0'.
FullName::FullName(std::string first_name, std::string last_name) {
  this->first_name_ = first_name;
  this->last_name_ = last_name;
  this->middle_initial_ = '0';
}

//Constructor that takes a single std::string containing a first and last name separate by a space, separates and places the names in their corresponding attributes, and sets the middle initial as the char '0'.
FullName::FullName(std::string full_name) {
  //Finding the first space
  int space_index = full_name.find_first_of(" ");
  //Making a substring out of everything after, which will be the last name
  this->last_name_ = full_name.substr(space_index + 1);
  //Making another substring starting from the beginning and going until the space, which will be the first name
  this->first_name_ = full_name.substr(0, space_index);
  this->middle_initial_ = '0';
}

FullName::~FullName() {
}

//Takes as input an std::string and sets it as the first_name_ attribute.
void FullName::ChangeFirstName(std::string new_first_name) {
  this->first_name_ = new_first_name;
}

//Takes as input a char and sets it as the middle_initial_ attribute.
void FullName::ChangeMiddleInitial(char new_middle_initial) {
  this->middle_initial_ = new_middle_initial;
}

//Takes as input an std::string and sets it as the last_name_ attribute.
void FullName::ChangeLastName(std::string new_last_name) {
  this->last_name_ = new_last_name;
}

//Returns an std::string in the format "<first_name_> <middle_initial_>. <last_name_>", or the same excluding the middle_initial_ attribute if it is set to the char '0'.
std::string FullName::GetNameFML() {
  if (this->middle_initial_ == '0') {
    return this->first_name_ + " " + this->last_name_;
  }

  else {
    return this->first_name_ + " " + this->middle_initial_ + ". " + this->last_name_;
  }
}

//Returns an std::string in the format "<last_name_>, <first_name_> <middle_initial_>.", or the same excluding the middle_initial_ attribute if it is set to the char '0'.
std::string FullName::GetNameLFM() {
  if (this->middle_initial_ == '0') {
    return this->last_name_ + ", " + this->first_name_;
  }
    
  else {
    return this->last_name_ + ", " + this->first_name_ + " " + this->middle_initial_ + ".";
  }
}

//Tests the FullName class, testing all three constructors, the getter methods, and the change methods. Modified version of Mark Liffiton's test code.
void FullName_main() {
  FullName mark = FullName("Mark Liffiton");
  std::cout << mark.GetNameFML() << std::endl;
  std::cout << mark.GetNameLFM() << std::endl;

  FullName spider_man = FullName("Peter", 'B', "Parker");
  std::cout << spider_man.GetNameFML() << std::endl;
  std::cout << spider_man.GetNameLFM() << std::endl;

  //Instead of reconstructing spider_man, changes to Miles using the Change methods.
  spider_man.ChangeFirstName("Miles");
  spider_man.ChangeMiddleInitial('G');
  spider_man.ChangeLastName("Morales");

  std::cout << spider_man.GetNameFML() << std::endl;
  std::cout << spider_man.GetNameLFM() << std::endl;

  FullName spinneret = FullName("Mary Jane", "Watson");
  std::cout << spinneret.GetNameFML() << std::endl;
  std::cout << spinneret.GetNameLFM() << std::endl;
    
}