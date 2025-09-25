#include <iostream>

//* Pass by VALUE
void swap(std::string a, std::string b) {
  std::string temp;

  temp = a;
  a = b;
  b = temp;
}

//* Pass by REFERENCE
void interchage(std::string &a, std::string &b) {
  std::string temp;

  temp = a;
  a = b;
  b = temp;
}

int main() {
  std::string x = "Kool-Aid";
  std::string y = "Water";

  swap(x, y); //* Pass by VALUE

  std::cout << "X: " << x << std::endl;
  std::cout << "Y: " << y << std::endl;

  interchage(x, y); //* Pass by REFERENCE

  std::cout << "X: " << x << std::endl;
  std::cout << "Y: " << y << std::endl;

  return 0;
}
