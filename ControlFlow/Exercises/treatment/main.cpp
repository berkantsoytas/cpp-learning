#include <iostream>

int main() {
  std::cout << "Please type in your age: ";
  int age;

  std::cin >> age;

  std::cout << std::endl;

  if (age > 20) {
    if (age < 40) {
      std::cout << "Yo're eligible for the treatment." << std::endl;
    } else {
      std::cout << "Sorry yo're too old for the treatment." << std::endl;
    }
  } else {
    std::cout << "Sorry yo're too young for the treatment." << std::endl;
  }

  return 0;
}