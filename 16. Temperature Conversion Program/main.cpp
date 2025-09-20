#include <iostream>

int main() {
  double temp;
  char unit;

  std::cout << "***** Temperature Conversion *****" << std::endl;
  std::cout << "F = Fahrenheit" << std::endl;
  std::cout << "C = Celsius" << std::endl;
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;
  std::cout << "Enter the temperature in "
            << (unit == 'F' ? "Celsius: " : "Fahrenheit: ");
  std::cin >> temp;

  switch (unit) {
    case 'F':
    case 'f':
      temp = (1.8 * temp) + 32.0;
      std::cout << "Temperature is: " << temp << "F" << std::endl;
      break;
    case 'C':
    case 'c':
      temp = (temp - 32) / 1.8;
      std::cout << "Temperature is: " << temp << "C" << std::endl;
      break;
    default:
      std::cout << "Invalid unit entered. Please enter 'C' or 'F'.\n";
      break;
  }

  std::cout << "**********************************";

  return 0;
}