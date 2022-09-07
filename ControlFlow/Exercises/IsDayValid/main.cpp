#include <iostream>

int main() {
  std::cout << "Which day is today [1..7] : ";
  int today;
  std::cin >> today;
  std::cout << std::endl;

  if ((today < 1) || (today > 7)) {
    std::cout << today << " is not a valid day. Application exited!" << std::endl;
    return 0;
  }

  if (today == 1) {
    std::cout << "Today is Monday.";
  } else if (today == 2) {
    std::cout << "Today is Tuesday.";
  } else if (today == 3) {
    std::cout << "Today is Wednesday.";
  } else if (today == 4) {
    std::cout << "Today is Thursday.";
  } else if (today == 5) {
    std::cout << "Today is Friday.";
  } else if (today == 6) {
    std::cout << "Today is Saturday.";
  } else {
    std::cout << "Today is Sunday.";
  }

  std::cout << "Let's have some fun." << std::endl;

  return 0;
}