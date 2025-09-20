#include <iostream>

int main() {
  //* Arithmetic Operators = return the result of a specific arithmetic
  //? operation ( + - * / )

  // parenthesis
  // multiplication & division
  // addition & substraction

  int students = 20;

  students = students + 1;
  students += 1;
  students++;

  students = students - 1;
  students -= 1;
  students--;

  students = students * 2;
  students *= 2;

  students = students / 2;
  students /= 3;

  int remainder = students % 3;

  int num = 6 - 5 + 4 * 3 / 2;

  std::cout << remainder << std::endl;
  std::cout << num;

  return 0;
}