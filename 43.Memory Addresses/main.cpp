#include <iostream>

int main() {
  //* Memory address = A location in memory where data is stored
  //* A memory address can accessed with & (address-of operator)

  std::string name = "Sid";
  int age = 22;
  bool student = true;

  std::cout << &name << std::endl;    // 140729284661792  sizeof = 32
  std::cout << &age << std::endl;     // 140729284661780  sizeof = 4
  std::cout << &student << std::endl; // 140729284661779  sizeof = 1

  return 0;
}
