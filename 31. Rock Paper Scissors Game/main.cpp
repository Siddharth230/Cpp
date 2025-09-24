#include <iostream>

int getComputerChoice() {
  int choice;
  srand(time(0));
  choice = rand() % 3 + 1;
  return choice;
}

// void showChoice(char choice) {}
// char chooseWinner(char player, char computer) {}

int main() {
  int player;
  int computer;

  std::cout << "************************\n";
  std::cout << "Rock Paper Scissors Game\n";
  std::cout << "************************\n";

  do {
    std::cout << "1. Rock\n";
    std::cout << "2. Paper\n";
    std::cout << "3. Scissors\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> player;

    switch (player) {
    case 1:
      computer = getComputerChoice();
      switch (computer) {
      case 1:
        std::cout << "Computer played Rock.\n";
        std::cout << "Tie\n";
        break;
      case 2:
        std::cout << "Computer played Paper.\n";
        std::cout << "You Lost.\n";
        break;
      case 3:
        std::cout << "Computer played Scissors.\n";
        std::cout << "You Win.\n";
        break;
      default:
        break;
      }
      break;
    case 2:
      computer = getComputerChoice();
      switch (computer) {
      case 1:
        std::cout << "Computer played Rock.\n";
        std::cout << "You Win\n";
        break;
      case 2:
        std::cout << "Computer played Paper.\n";
        std::cout << "Tie.\n";
        break;
      case 3:
        std::cout << "Computer played Scissors.\n";
        std::cout << "You Lost.\n";
        break;
      default:
        break;
      }
      break;
    case 3:
      computer = getComputerChoice();
      switch (computer) {
      case 1:
        std::cout << "Computer played Rock.\n";
        std::cout << "You Lost\n";
        break;
      case 2:
        std::cout << "Computer played Paper.\n";
        std::cout << "You Win.\n";
        break;
      case 3:
        std::cout << "Computer played Scissors.\n";
        std::cout << "Tie.\n";
        break;
      default:
        break;
      }
      break;
    case 4:
      std::cout << "Thanks for Playing.";
      break;
    default:
      std::cout << "Enter valid input.\n";
      break;
    }
  } while (player != 4);

  return 0;
}