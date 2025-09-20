#include <iostream>

int main() {
  // This is a comment
  /*
    This
    is
    a
    multi-line
    comment
  */

  std::cout << "Hello World!" << std::endl;
  std::cout << "It's Good" << '\n';

  int x = 5;
  int y = 6;
  int sum = x + y;

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';

  //* Integer (Whole Number)
  int age = 22;
  int year = 2025;
  int days = 7.5;

  std::cout << days << std::endl;  // output = 7

  //* Double (Number including Decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;

  std::cout << price << std::endl;

  //* Single Character
  char grade = 'A';
  char initial = 'C';  //? char can only store a single character
  char currency = '$';

  std::cout << initial << std::endl;

  //* Boolean (true or false)
  bool student = false;
  bool power = true;
  bool forSale = true;

  std::cout << forSale << std::endl;

  //* String (Objects that represents a sequence of text)
  std::string name = "Sid";
  std::string day = "Tuesday";
  std::string food = "pizza";
  std::string address = "123 sr. no.";

  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old." << std::endl;
  std::cout << address;

  return 0;
}