#include <iostream>

int main() {
  //* Array = A data structure that can hold multiple values
  //*         Values are accessed by an index number
  //*         "Kind of like a variable that holds multiple values"

  std::string cars[] = {"Lamborghini", "Mustang", "Pagani"}; //? Same Data Types

  std::cout << cars[0] << std::endl;
  std::cout << cars[1] << std::endl;
  std::cout << cars[2] << std::endl;

  cars[0] = "Ferrari";

  std::cout << cars[0] << std::endl;

  double prices[] = {5.00, 7.50, 9.99, 15.73};

  std::cout << prices[0] << std::endl;
  std::cout << prices[1] << std::endl;
  std::cout << prices[2] << std::endl;
  std::cout << prices[3] << std::endl;

  return 0;
}