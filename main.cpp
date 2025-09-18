#include <iostream>
using namespace std;

int main() {
  char op;
  double num1;
  double num2;
  double result;
  double ans;

  cout << "************ CALCULATOR ************" << endl;

  cout << "Enter either (+ - * /): ";
  cin >> op;

  cout << "Enter number 1: ";
  cin >> num1;

  cout << "Enter number 2: ";
  cin >> num2;

  switch (op) {
    case '+':
      ans = num1 + num2;
      cout << ans << endl;
      break;
    case '-':
      ans = num1 - num2;
      cout << ans << endl;
      break;
    case '*':
      ans = num1 * num2;
      cout << ans << endl;
      break;
    case '/':
      ans = num1 / num2;
      cout << ans << endl;
      break;
    default:
      cout << "Enter Valid Operators" << endl;
  }

  cout << "************************************";

  return 0;
}