#include <iostream>

int main() {
  //* && = Check if both conditions are true
  //* || = Check if at least one of the two conditions is true
  //* !  = Reverse the logical state of its operand

  int temp;
  bool sunny = false;

  std::cout << "Enter the temperature: ";
  std::cin >> temp;

  if (temp > 0 && temp < 30) {
    std::cout << "The temperature is good." << std::endl;
  } else {
    std::cout << "The temperature is bad" << std::endl;
  }

  if (temp <= 0 || temp >= 30) {
    std::cout << "The temperature is bad." << std::endl;
  } else {
    std::cout << "The temperature is good" << std::endl;
  }

  if (!sunny) {
    std::cout << "It is cloudy outside!" << std::endl;
  } else {
    std::cout << "It is sunny outside" << std::endl;
  }

  return 0;
}