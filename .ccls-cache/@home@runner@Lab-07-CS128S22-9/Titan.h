// Titan.h (for declaring the class)
#ifndef TITAN_H_
#define TITAN_H_

#include <string>
#include "FullName.h"

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
    void GlareAtNemesis();
    void SetNemesis(std::string new_nemesis);
    void SetNemesisTitan(Titan& new_nemesis);

  private:
    // Attributes common to all Titans
    int id_;        // student/employee ID
    int age_;       // age in years
    FullName name_;

    std::string nemesis_;
};


#endif