// Titan.h (for declaring the class)
#ifndef TITAN_H_
#define TITAN_H_

#include <string>

// Titan is a base class for all IWU-related people
class Titan {

  public:
    // Constructor
    Titan(int id, int age, std::string name);

    // Getters and setters
    int GetId();
    void SetId(int new_id);
    int GetAge();
    void SetAge(int new_age);
    std::string GetName();
    void SetName(std::string new_name);

  private:
    // Attributes common to all Titans
    int id_;        // student/employee ID
    int age_;       // age in years
    std::string name_;
};


#endif