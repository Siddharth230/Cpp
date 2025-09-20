#include <iostream>

int main() {
  for (int i = 1; i <= 10; i++) {
    std::cout << i << std::endl;
  }

  for (int i = 0; i < 10; i += 2) {
    std::cout << i << std::endl;
  }

  for (int i = 10; i >= 1; i--) {
    std::cout << i << std::endl;
  }

  std::cout << "Happy New Year!" << std::endl;

  return 0;
}