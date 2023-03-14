// Student.h (for declaring the class)
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

#include "Titan.h"

// Practicing inheritance.
// Student is *derived from* the Titan class.
class Student : public Titan {
  public:
    // Constructor
    Student(int new_id,
        int new_age,
        std::string new_name);

    // Destructor
    ~Student();

    // Getter and Setter methods
    std::string GetMajor();
    void SetMajor(std::string new_major);
    double GetGPA();
    void SetGPA(double new_gpa);

    // Don't give direct access to the internal extracurriculars array, rather provide a set of methods for "allowed" functionality
    void AddExtracurricular(std::string new_extracurricular);
    void ClearExtraccuriculars();
    void PrintExtracurriculars();

  private:
    // Attributes
    std::string major_;
    double gpa_;
    // partially filled array of extracurriculars
    std::string* extracurriculars_;
    int ec_size_;      // # of extracurriculars
    int ec_capacity_;  // capacity of our PFA
};

#endif