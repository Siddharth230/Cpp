#include <iostream>

int main() {
  //* Ternary Operator ?: = Replacement to an if/else statement
  //*  condition ? expression1: expression2;

  int grade = 75;

  // if (grade >= 60) {
  //   std::cout << "You Pass!";
  // } else {
  //   std::cout << "You Fail!";
  // }

  grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail" << std::endl;

  int number = 8;
  number % 2 == 1 ? std::cout << 'ODD' : std::cout << "EVEN" << std::endl;

  bool hungry = true;
  //* hungry ? std::cout << "You are hungry" : std::cout << "You are full" <<
  std::cout << (hungry ? "You are hungry" : "You are full") << std::endl;

  return 0;
}
