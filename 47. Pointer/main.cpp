#include <iostream>

int main() {
  //* Pointers = Variable that stores a memory address of another variable
  //*            sometimes it's easier to work with an address

  //? & = address-of operator
  //? * = deference operator

  std::string name = "Sid";
  int age = 22;
  std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  std::string *pName = &name;
  int *pAge = &age;
  std::string *pFreePizzas = freePizzas;

  std::cout << pName << " = " << *pName << std::endl;
  std::cout << pAge << " = " << *pAge << std::endl;
  std::cout << *pFreePizzas << std::endl;

  return 0;
}