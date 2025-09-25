#include <iostream>

int main() {
  //* Null value = A special value that means something has no value.
  //*              When a pointer is holding a null value,
  //*              that pointer is not pointing at anything (null pointer)

  //* nullptr = Keyword represents a null pointer literal

  //* nullptrs are helpful when determining if an address
  //* was successfully assigned to a pointer

  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  if (pointer == nullptr) {
    std::cout << "address was not assigned";
  } else {
    std::cout << "Address was assigned";
    std::cout << *pointer;
  }

  return 0;
}