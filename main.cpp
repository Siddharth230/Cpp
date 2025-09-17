#include <iostream>

int main() {
  //* switch = alternative to using many "else if" statements
  //*          compare one value against matching cases

  int month;
  std::cout << "Enter the month (1-12): ";
  std::cin >> month;

  switch (month) {
    case 1:
      std::cout << "It is January";
      break;
    case 2:
      std::cout << "It is February";
      break;
    case 3:
      std::cout << "It is March";
      break;
    case 4:
      std::cout << "It is April";
      break;
    case 5:
      std::cout << "It is May";
      break;
    case 6:
      std::cout << "It is June";
      break;
    case 7:
      std::cout << "It is July";
      break;
    case 8:
      std::cout << "It is August";
      break;
    case 9:
      std::cout << "It is September";
      break;
    case 10:
      std::cout << "It is October";
      break;
    case 11:
      std::cout << "It is November";
      break;
    case 12:
      std::cout << "It is December";
      break;
    default:
      std::cout << "Please enter in only number (1-12)";
  }

  char grade;

  std::cout << "What Grade?: ";
  std::cin >> grade;

  switch (grade) {
    case 'A':
    case 'a':
      std::cout << "You did great!";
      break;
    case 'B':
    case 'b':
      std::cout << "You did good";
      break;
    case 'C':
    case 'c':
      std::cout << "You did okay";
      break;
    case 'D':
    case 'd':
      std::cout << "You did not do good";
      break;
    case 'E':
    case 'e':
      std::cout << "You did very bad";
      break;
    case 'F':
    case 'f':
      std::cout << "You failed";
      break;
    default:
      std::cout << "Please Enter Valid Grade(A-F).";
  }

  return 0;
}