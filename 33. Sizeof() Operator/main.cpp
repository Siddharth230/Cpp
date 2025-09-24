#include <iostream>

int main() {
  //* sizeof() = Determines the size in bytes of a:
  //*            variables, data types, class, objects, etc.

  double gpa = 2.5;
  std::string name = "Sid Lok";
  char grade = 'F';
  bool student = true;
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  std::string students[] = {"Sid", "Om", "Siddharth"};

  std::cout << sizeof(gpa) << " bytes\n";
  std::cout << sizeof(double) << " bytes\n";

  std::cout << sizeof(name) << " bytes\n";
  std::cout << sizeof(std::string) << " bytes\n";

  std::cout << sizeof(grade) << " bytes\n";
  std::cout << sizeof(char) << " bytes\n";

  std::cout << sizeof(student) << " bytes\n";
  std::cout << sizeof(bool) << " bytes\n";

  std::cout << sizeof(grades) << " bytes\n";
  std::cout << sizeof(grades) / sizeof(char) << " elements\n";

  std::cout << sizeof(students) << " bytes\n";
  std::cout << sizeof(students) / sizeof(std::string) << " students\n";

  return 0;
}