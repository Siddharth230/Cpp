#include <iostream>

int main() {
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if (name.length() > 12) {
    std::cout << "Your name cannot be over 12 characters.";
  } else {
    std::cout << "Welcome " << name << std::endl;
  }

  if (name.empty()) {
    std::cout << "You didn't enter your name";
  } else {
    std::cout << "Hello " << name << std::endl;
  }

  // name.clear(); //*Clears value of string

  name.append("@gmail.com");

  std::cout << "Your name is now " << name << std::endl;

  std::cout << "First character in String name is " << name.at(0) << std::endl;

  name.insert(0, "@");

  std::cout << name << std::endl;

  std::cout << name.find(' ') << std::endl;

  name.erase(0, 1);
  std::cout << name << std::endl;

  return 0;
}