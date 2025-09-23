#include <iostream>

double square(double length) {
  // double result = length * length;
  // return result;
  return length * length;
}

double cube(double length) { return length * length * length; }

std::string concatStrings(std::string string1, std::string string2) {
  return string1 + " " + string2;
}

int main() {
  //* return = Return a value back to the spot
  //*          where you called the encompassing function

  double length = 5.0;
  double area = square(length);
  double volume = cube(length);

  std::cout << "Area: " << area << "sqcm\n";
  std::cout << "Volume: " << volume << "ccm\n";

  std::string firstName = "Sid";
  std::string lastName = "Lok";
  std::string fullName = concatStrings(firstName, lastName);

  std::cout << "Hello " << fullName;

  return 0;
}