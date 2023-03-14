#include "Student.h"
#include "Titan.h"
#include "Employee.h"
#include "FullName.h"

void NemesisTest() {
  Student taylor = Student(123, 32, "Taylor Swift");
  Employee mark = Employee(124, 40, "Mark Liffiton", 2009, "Computer Science");
  taylor.GlareAtNemesis();
  taylor.SetNemesis("that Scooter guy");
  taylor.GlareAtNemesis();
  mark.SetNemesisTitan(taylor);
  mark.GlareAtNemesis();
}

int main() {
  Employee_main();
  FullName_main();
  NemesisTest();
}

