#include <iostream>

int searchArray(int array[], int size, int element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }
  return -1;
}

int searchArrayf(std::string array[], int size, std::string element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }
  return -1;
}

int main() {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(int);
  int index;
  int myNum;

  std::string foods[] = {"Pizza", "Burgers", "Hotdogs"};
  int sizef = sizeof(foods) / sizeof(std::string);
  int indexf;
  std::string myFood;

  std::cout << "Enter element to search for: " << std::endl;
  std::cin >> myNum;

  index = searchArray(numbers, size, myNum);

  if (index != -1) {
    std::cout << myNum << " is at index " << index << std::endl;
  } else {
    std::cout << myNum << " is not in the array" << std::endl;
  }

  std::cout << "Enter dish to search for: " << std::endl;
  std::getline(std::cin, myFood);

  indexf = searchArrayf(foods, sizef, myFood);

  if (indexf != -1) {
    std::cout << myFood << " is at index " << indexf;
  } else {
    std::cout << myFood << " is not in the array";
  }

  return 0;
}