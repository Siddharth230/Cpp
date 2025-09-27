#include <iostream>
using namespace std;

class Animal {
public:
  bool alive = true;

  void eat() {
    cout << "This animal is eating" << endl;
  }
};

class Dog : public Animal {
public:
  void bark() {
    cout << "The dog goes woof" << endl;
  }
};

class Cat : public Animal {
public:
  void meow() {
    cout << "The cat goes meow" << endl;
  }
};

int main() {
  //* Inheritance = A class can recieve attributes and methods from another class
  //*               Children classes inherit from a Parent class
  //*               Helps to reuse similar code found within multiple classes

  Dog dog;
  Cat cat;

  cout << dog.alive << endl;
  dog.eat();
  dog.bark();
  // cat.bark();
  cat.meow();

  return 0;
}