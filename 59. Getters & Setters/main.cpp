#include <iostream>
using namespace std;

class Stove {
private:
  int price = 100;

public:
  int temperature = 0;

  int getPrice() { //? price becomes READABLE
    return price;
  }

  void setPrice(int price) { //? price becomes WRITABLE
    this->price = price;
  }
};

int main() {
  //* Abstraction = Hiding unnecessary data from outside a class
  //* Getter = Function that makes a private attribute READABLE
  //* Setter = Function that makes a private attribute WRITABLE

  Stove stove;

  cout << stove.temperature << endl;
  cout << stove.getPrice() << endl;

  stove.temperature = 100000;
  // stove.price = 101;  //? Not Possible
  stove.setPrice(101);

  cout << stove.temperature << endl;
  cout << stove.getPrice() << endl;

  return 0;
}