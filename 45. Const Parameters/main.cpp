#include <iostream>

void printInfo(const std::string name, const int age) {
  std::cout << name << std::endl;
  std::cout << age << std::endl;
}

int main() {
  //* const parameter = Parameter that is effectively read-only
  //*                   code is more secure & conveys intent
  //*                   useful for references and pointers

  std::string name = "Sid";
  int age = 22;

  printInfo(name, age);
  return 0;
}