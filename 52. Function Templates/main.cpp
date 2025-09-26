#include <iostream>
template <typename T, typename U>

// int max(int x, int y) {
//   return (x > y) ? x : y;
// }

// double max(double x, double y) {
//   return (x > y) ? x : y;
// }

// char max(char x, char y) {
//   return (x > y) ? x : y;
// }

//? arguments needs to be of same data type
// T max(T x, T y) {
//   return (x > y) ? x : y;
// }

//? argument of two different data types can be used
auto max(T x, U y) {
  return (x > y) ? x : y;
}

int main() {
  //* Function Template = Describes what a function looks like.
  //*                     Can be used to generate as many overloaded functions
  //*                     as needed, each using different data types

  std::cout << max(38, 32) << std::endl;
  std::cout << max(2.76, 2.8) << std::endl;
  std::cout << max('1', '2') << std::endl;
  std::cout << max(1, 2.1) << std::endl;
  std::cout << max(1, '2') << std::endl;

  return 0;
}