#include <iostream>

int main() {
  //* fill() = Fills a range of elements with a specified value
  //*          fill(begin, end, value)

  const int SIZE = 99;

  std::string foods[SIZE];

  // fill(foods, foods + SIZE, "Pizza");
  fill(foods, foods + SIZE / 3, "Pizza");
  fill(foods + SIZE / 3, foods + SIZE * 2 / 3, "Burger");
  fill(foods + SIZE * 2 / 3, foods + SIZE, "Pasta");

  for (std::string food : foods) {
    std::cout << food << '\n';
  }

  return 0;
}