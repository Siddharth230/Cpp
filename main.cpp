#include <cmath>
#include <iostream>

int main() {
  double x = 3;
  double y = 4;
  double pi = 3.14;
  double q = 3.99;
  double z;

  // z = std::max(x, y);  // 4
  // z = std::min(x, y);  // 3
  // z = pow(2, 3);  // 2*2*2 = 8
  // z = sqrt(9);  // 3
  // z = abs(-5);  // 5
  // z = round(pi);  // 3
  // z = ceil(pi);  // 4
  z = floor(q);  // 3

  std::cout << z;

  return 0;
}