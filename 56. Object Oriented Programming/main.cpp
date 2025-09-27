#include <iostream>
using namespace std;

class Human {
public:
  string name;
  string occupation;
  int age;
  string nationality = "Indian";

  void eat() {
    cout << name << " is eating." << endl;
  }

  void drink() {
    cout << name << " is drinking." << endl;
  }

  void sleep() {
    cout << name << " is sleeping" << endl;
  }
};

class Car {
public:
  string make;
  string model;
  int year;
  string color;

  void accelerate() {
    cout << "You stepped on accelorator." << endl;
  }

  void brake() {
    cout << "You stepped on brake." << endl;
  }
};

int main() {
  //* object = A collection of attributes and methods
  //*          They can have characteristics and could perform actions
  //*          Can be used to mimic real world items (ex. Phone, Book, Dog)
  //*          Created from a class which acts as a "blue-print"

  Human human1;
  Human human2;

  human1.name = "Sid";
  human1.occupation = "Student";
  human1.age = 22;

  human2.name = "Om";
  human2.occupation = "Scientist";
  human2.age = 25;

  cout << human1.name << endl;
  cout << human1.occupation << endl;
  cout << human1.age << endl;
  cout << human1.nationality << endl;

  cout << human2.name << endl;
  cout << human2.occupation << endl;
  cout << human2.age << endl;
  cout << human2.nationality << endl;

  //? Objects are similar to structs but objects can perform actions, they have methods

  human1.eat();
  human1.drink();
  human1.sleep();

  human2.eat();
  human2.drink();
  human2.sleep();

  Car car1;

  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2015;
  car1.color = "Black";

  cout << car1.make << endl;
  cout << car1.model << endl;
  cout << car1.year << endl;
  cout << car1.color << endl;

  car1.accelerate();
  car1.brake();

  return 0;
}