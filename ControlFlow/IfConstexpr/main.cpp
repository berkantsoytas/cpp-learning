#include <iostream>

int main() {
  constexpr bool condition{false};
  if constexpr (condition) {
    std::cout << "Condition is true";
  } else {
    std::cout << "Condition is false";
  }

  return 0;
}