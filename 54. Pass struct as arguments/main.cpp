#include <iostream>
using namespace std;

struct Car {
  string model;
  int year;
  string color;
};

void printCar(Car car) { //? Creates a copy of value at different address and performs tasks on it
  cout << &car << endl;

  cout << car.model << endl;
  cout << car.year << endl;
  cout << car.color << endl;
}

void printCarr(Car &car) { //? Uses original data value at the address and performs tasks on it
  cout << &car << endl;

  cout << car.model << endl;
  cout << car.year << endl;
  cout << car.color << endl;
}

void paintCar(Car car, string color) {
  car.color = color;
}

void paintCarr(Car &car, string color) {
  car.color = color;
}

int main() {
  Car car1;
  Car car2;

  car1.model = "Nexon";
  car1.year = 2019;
  car1.color = "Blue";

  car2.model = "Harrier";
  car2.year = 2024;
  car2.color = "Black";

  cout << &car1 << endl;
  cout << &car2 << endl;

  printCar(car1);
  printCar(car2);

  printCarr(car1);
  printCarr(car2);

  paintCar(car1, "Black");
  paintCarr(car2, "Red");

  printCarr(car1);
  printCarr(car2);

  return 0;
}