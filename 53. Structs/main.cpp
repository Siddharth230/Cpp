#include <iostream>

struct student {
  std::string name;
  double gpa;
  bool enrolled = true;
};

int main() {
  //* Struct = A structure that group related variables under one name
  //*          structs can contain many different data types (string, int, bool char)etc.
  //*          variables in a struct are known as "members"
  //*          members can be access with. "Class Member Access Operator"

  student student1;
  student1.name = "Sid";
  student1.gpa = 3.2;

  student student2;
  student2.name = "Om";
  student2.gpa = 4.5;

  student student3;
  student3.name = "Patrick";
  student3.gpa = 2.9;
  student3.enrolled = false;

  std::cout << student1.name << std::endl;
  std::cout << student1.gpa << std::endl;
  std::cout << student1.enrolled << std::endl;

  std::cout << student2.name << std::endl;
  std::cout << student2.gpa << std::endl;
  std::cout << student2.enrolled << std::endl;

  std::cout << student3.name << std::endl;
  std::cout << student3.gpa << std::endl;
  std::cout << student3.enrolled << std::endl;

  return 0;
}