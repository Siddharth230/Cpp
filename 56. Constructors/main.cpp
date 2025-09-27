#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int age;
  double gpa;

  Student(string name, int age, double gpa) { //?(string x, int y, double z)
    this->name = name;                        //? name = x;
    this->age = age;                          //? age = y;
    this->gpa = gpa;                          //? gpa = z;
  }
};

int main() {
  //* Constructors = Special method that is automatically called when an object is instantiated
  //*                useful for assigning values to attributes as arguments

  Student student1("Sid", 22, 3.9);
  Student student2("Om", 25, 2.6);

  cout << student1.name << endl;
  cout << student1.age << endl;
  cout << student1.gpa << endl;

  cout << student2.name << endl;
  cout << student2.age << endl;
  cout << student2.gpa << endl;

  return 0;
}