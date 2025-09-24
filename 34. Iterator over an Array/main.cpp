#include <iostream>

int main() {
  std::string students[] = {"Sid", "Om", "Siddharth", "sid"};
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

  // std::cout << students[0] << std::endl;
  // std::cout << students[1] << std::endl;
  // std::cout << students[2] << std::endl;

  for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) {
    std::cout << students[i] << std::endl;
  }

  for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {
    std::cout << grades[i] << std::endl;
  }

  return 0;
}