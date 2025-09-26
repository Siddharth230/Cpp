#include <iostream>

void walk(int steps) {
  for (int i = 0; i < steps; i++) {
    std::cout << "You take a step." << std::endl;
  }
}

void walkR(int steps) {
  if (steps > 0) {
    std::cout << "You take a step!" << std::endl;
    walkR(steps - 1);
  }
}

int factorial(int num) {
  int result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }

  return result;
}

int factorialR(int num) {
  if (num > 1) {
    return num * factorialR(num - 1);
  } else {
    return 1;
  }
}

int main() {
  //* Recursion = A programming technique where a function invokes itself from within
  //*             breaks a comlex concept into a repeatable single step

  //* Iterative vs Recursive

  //* Advantages = Less code and is cleaner
  //*              Useful for sorting and searching algorithms

  //* Disadvantages = Uses more Memory
  //*                 Slower

  // walk(100);
  // walkR(100);

  std::cout << factorialR(12);

  return 0;
}