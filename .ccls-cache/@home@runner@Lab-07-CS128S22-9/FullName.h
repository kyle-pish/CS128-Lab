#ifndef FULLNAME_H_
#define FULLNAME_H_

#include <iostream>

class FullName {

  public:
    FullName(std::string first_name, char middle_intial, std::string last_name);
    FullName(std::string first_name, std::string last_name);

    FullName(std::string full_name);

    ~FullName();

    void ChangeFirstName(std::string new_first_name);
    void ChangeMiddleInitial(char new_middle_initial);
    void ChangeLastName(std::string new_last_name);
    std::string GetNameFML();
    std::string GetNameLFM();

  private:
    std::string first_name_;
    std::string last_name_;
    char middle_initial_;
    
};

void FullName_main();

#endif