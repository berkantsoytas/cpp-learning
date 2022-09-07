#include <iostream>

int main() {
  std::cout << "Please type in an integral value: " << std::endl;
  int number;
  std::cin >> number;

  if (number % 2 == 0) {
    std::cout << number << " is even" << std::endl;
  } else {
    std::cout << number << " is odd" << std::endl;
  }

  return 0;
}
