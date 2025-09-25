#include <iostream>

int main() {
  std::string questions[] = {
      "1. What year was C++ created?: ", "2. Who invented C++?: ",
      "3. What is the predecessor of C++?: ", "4. Is Earth flat?: "};

  std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                              {"A. Guido van Rossum", "B. Bjarne stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                              {"A. C", "B. C+", "C. C--", "D. B++"},
                              {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};

  char answerKey[] = {'C', 'B', 'A', 'B'};

  int size = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score = 0;

  for (int i = 0; i < size; i++) {
    std::cout << questions[i] << std::endl;

    for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
      std::cout << options[i][j] << std::endl;
    }

    std::cin >> guess;
    guess = toupper(guess);

    if (guess == answerKey[i]) {
      std::cout << "Correct" << std::endl;
      score++;
    } else {
      std::cout << "Wrong" << std::endl;
      std::cout << "Answer: " << answerKey[i] << std::endl;
    }
  }

  std::cout << "Your score is " << score << "/4.";

  return 0;
}