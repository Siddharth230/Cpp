#include <iostream>
using namespace std;

enum Days { Sunday = 0,
            Monday = 1,
            Tuesday = 2,
            Wednesday = 3,
            Thursday = 4,
            Friday = 5,
            Saturday = 6 };

int main() {
  //* enums = a user-defined data type that consists
  //*         of paired named-integer constants.
  //*         GREAT if you have a ser of potential options

  Days today = Sunday;

  switch (today) {
  case Sunday:
    cout << "It is Sunday!\n";
    break;
  case Monday:
    cout << "It is Monday!\n";
    break;
  case Tuesday:
    cout << "It is Tuesday!\n";
    break;
  case Wednesday:
    cout << "It is Wednesday!\n";
    break;
  case Thursday:
    cout << "It is SThrusday\n";
    break;
  case Friday:
    cout << "It is Friday!\n";
    break;
  case Saturday:
    cout << "It is Saturday!\n";
    break;
  }

  return 0;
}