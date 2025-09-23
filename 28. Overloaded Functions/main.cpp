#include <iostream>

void backedPizza() { std::cout << "Here is your Pizza!\n"; }

void backedPizza(std::string topping1) {
  std::cout << "Here is your " << topping1 << " Pizza!\n";
}

void backedPizza(std::string topping1, std::string topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}

int main() {
  backedPizza();
  backedPizza("Pepperoni");
  backedPizza("Pepperoni", "Salami");

  return 0;
}