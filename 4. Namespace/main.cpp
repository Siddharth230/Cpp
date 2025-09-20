#include <iostream>

//* Namespace = Provides a solution for preventing name conflicts
//* in large projects. Each entity needs a unique name.
//* A namespace allows for identically named entities
//* as long as the namespace are different.

namespace first {
int x = 1;
}

namespace second {
int x = 2;
}

int main() {
  using namespace first;
  // int x = 0;

  std::cout << x << std::endl;
  std::cout << first::x << std::endl;
  std::cout << second::x << std::endl;

  return 0;
}