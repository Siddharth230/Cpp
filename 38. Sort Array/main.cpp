#include <iostream>

void sort(int array[], int size) {
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  int numbers[] = {5, 43, 875, 41, 45, 1, 0, 433, 794, 9};
  int size = sizeof(numbers) / sizeof(int);

  sort(numbers, size);

  for (int element : numbers) {
    std::cout << element << " ";
  }

  return 0;
}