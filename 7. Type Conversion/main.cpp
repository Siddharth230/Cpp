#include <iostream>

int main() {
  /**
   **  type conversion = conversion a value of one data type to another
   **  Implicit = Automatic
   **  Explicit = Precede value with new data type (int)
   */
  int x = 3.14;          // 3
  double y = (int)3.14;  // 3
  char z =
      100;  // Converts it using ascii table to get it's value 100 = 1100100 = d
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;

  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << z << std::endl;
  std::cout << (char)100 << std::endl;
  std::cout << score << "%";

  return 0;
}