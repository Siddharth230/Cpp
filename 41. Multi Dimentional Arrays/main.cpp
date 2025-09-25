#include <iostream>

int main() {
  std::string car[][3] = {{"Mustang", "Escape", "GT"},
                          {"Corvette", "Equinox", "Silverado"},
                          {"Challenger", "Durango", "Ram"}};

  int rows = sizeof(car) / sizeof(car[0]);
  int column = sizeof(car[0]) / sizeof(car[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < column; j++) {
      std::cout << car[i][j] << " ";
    }
    std::cout << '\n';
  }

  return 0;
}