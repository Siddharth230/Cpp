#include <iostream>

int main() {
  //* Dynamic Memory = Memory that is allocated after the program
  //*                  is already compiled & running.
  //*                  Use the 'new' operator to allocate
  //*                  memory in the heap rather than the stack

  //*                  Useful when we don't know how much memory
  //*                  we will need. Makes our programs more flexible,
  //*                  especially when accepting user input.

  int *pNum = NULL;
  char *pGrades = NULL;
  int size;

  std::cout << "How many grades to enter in?: ";
  std::cin >> size;

  pNum = new int;
  pGrades = new char[size];

  *pNum = 22;
  for (int i = 0; i < size; i++) {
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> pGrades[i];
  }

  std::cout << "Address: " << pNum << std::endl;
  std::cout << "Value: " << *pNum << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << pGrades[i] << " ";
  }

  delete pNum;
  delete[] pGrades;

  return 0;
}