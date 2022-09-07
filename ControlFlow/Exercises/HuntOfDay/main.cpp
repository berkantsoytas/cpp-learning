#include <iostream>

int main() {
  std::cout << "Which day is today [1...7] : " << std::endl;
  int today, days_passed;
  std::cin >> today;

  // Check if day is valid, only 1,...,7 are acceptable
  if ((today < 1) || (today > 7)) {
    std::cout << today << " is not a valid day. Bye!" << std::endl;
    return 0;
  }

  std::cout << "How many days have passed up to today : " << std::endl;
  std::cin >> days_passed;

  if (today == 1) {
    std::cout << "Today is Monday" << std::endl;
  } else if (today == 2) {
    std::cout << "Today is Tuesday" << std::endl;
  } else if (today == 3) {
    std::cout << "Today is Wednesday" << std::endl;
  } else if (today == 4) {
    std::cout << "Today is Thursday" << std::endl;
  } else if (today == 5) {
    std::cout << "Today is Friday" << std::endl;
  } else if (today == 6) {
    std::cout << "Today is Saturday" << std::endl;
  } else {
    std::cout << "Today is Sunday" << std::endl;
  }

  int day_in_the_past = today - (days_passed % 7);

  if (day_in_the_past < 0) {
    day_in_the_past += 7;
  }

  std::cout << "If we went " << days_passed << " days in the past we would hit a ";
  switch (day_in_the_past) {
    case 1:
      std::cout << "Monday" << std::endl;
      break;
    case 2:
      std::cout << "Tuesday" << std::endl;
      break;
    case 3:
      std::cout << "Wednesday" << std::endl;
      break;
    case 4:
      std::cout << "Thursday" << std::endl;
      break;
    case 5:
      std::cout << "Friday" << std::endl;
      break;
    case 6:
      std::cout << "Saturday" << std::endl;
      break;
    case 0:
      std::cout << "Sunday" << std::endl;
      break;
    default:
      std::cout << "Invalid day" << std::endl;
      break;
  }

  return 0;
}