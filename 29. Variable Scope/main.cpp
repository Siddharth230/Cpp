#include <iostream>

int myNum = 3; //* Global Variable

void printNum() {
  int myNum = 2; //* Local Variable
  std::cout << ::myNum << "\n";
}

int main() {
  //* Local Variables = Declared inside a function or block {}
  //* Global Variables = Declared outside of all functions

  int myNum = 1; //* Local Variable

  printNum();

  std::cout << myNum << "\n";   //* Uses Local Variables
  std::cout << ::myNum << "\n"; //* Uses Global Variables

  return 0;
}