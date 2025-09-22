#include <iostream>

void happyBirthday(std::string n, int a) {
  std::cout << "Happy Birthday to " << n << "!\n";
  std::cout << "You are now " << a << "years old.\n\n";
}

int main() {
  //* Function = A block of reusable code

  std::string name = "Sid";
  int age = 22;

  happyBirthday(name, age);
  happyBirthday(name, age);
  happyBirthday(name, age);

  return 0;
}