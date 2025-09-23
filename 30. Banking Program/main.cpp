#include <iomanip>
#include <iostream>
#include <limits>

void showBalance(double balance) {
  std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance
            << std::endl;
}

double deposit() {
  double amount = 0;
  std::cout << "Enter amount to be deposited: ";
  std::cin >> amount;

  if (amount > 0) {
    return amount;
  } else {
    std::cout << "Not valid amount.";
    return 0;
  }
}

double withdraw(double balance) {
  double amount = 0;
  std::cout << "Enter amount to be withdrawn: ";
  std::cin >> amount;
  if (amount >= balance) {
    std::cout << "Insufficient funds.\nWithdrawn amount cannot be more than Balance.\n";
    std::cout << "Maximum You can withdraw is $" << balance << std::endl;
    return 0;
  } else if (amount < 0) {
    std::cout << "That's not a valid amount.";
    return 0;
  } else {
    return amount;
  }
}

int main() {
  double balance = 123.03;
  int choice = 0;

  std::cout << "******************\n";
  std::cout << "Bank System\n";
  std::cout << "******************\n";

  do {
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (std::cin.fail()) {
      choice = 0;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    switch (choice) {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposit();
      showBalance(balance);
      break;
    case 3:
      balance -= withdraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout << "******************\n";
      std::cout << "Thanks for visiting.\n";
      std::cout << "******************\n";
      break;
    default:
      std::cout << "Invalid case.\n";
    }
  } while (choice != 4);

  return 0;
}