#include <iostream>

//* cout << (Insertion Operator)
//* cin << (Extraction Operator)

int main() {
  std::string name;
  std::string fullName;
  int age;

  std::cout << "What's your name?: ";
  std::cin >> name;

  std::cin.ignore();  //* Discard the newline character

  std::cout << "What's your full name?: ";
  std::getline(std::cin, fullName);

  std::cout << "What's your age?: ";
  std::cin >> age;

  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old.";

  return 0;
}