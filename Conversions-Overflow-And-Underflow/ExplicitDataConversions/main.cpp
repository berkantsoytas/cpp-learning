#include <iostream>

int main()
{
  // Implicit cast will add up the doubles,
  // then turn result into int for assigment.
  double x{12.5};
  double y{34.6};

  int sum = x + y; // 47.1
  std::cout << "The sum is: " << sum << std::endl;

  // Explicity cast: Cast then sum up
  sum = static_cast<int>(x) + static_cast<int>(y); // 12 + 34
  std::cout << "The sum is: " << sum << std::endl; // 46

  // Explict cast: Sum up then cast, same thing as implicit cast
  sum = static_cast<int>(x + y);                                 // 47.1 convert to int
  std::cout << "Sum up then cast, result: " << sum << std::endl; // 47

  // Old style C-cast
  double PI{3.14};

  int int_pi = (int)(PI);
  
  std::cout << "PI: " << PI << std::endl;
  std::cout << "INT PI: " << int_pi << std::endl;

  return 0;
}