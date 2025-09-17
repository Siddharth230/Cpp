#include <iostream>

int main() {
  //* if statements = Do something if a condition is true.
  //*                 if not, then don't do it.

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 100) {
    std::cout << "You should be Dead";
  } else if (age >= 18) {
    std::cout << "Welcome to the site";
  } else if (age < 0) {
    std::cout << "Enter valid age";
  } else {
    std::cout << "You are underage.";
  }

  return 0;
}