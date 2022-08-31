#include <iostream>

int main()
{
  // addition
  short number1{2};
  short number2{7};

  short result = number1 + number2;

  std::cout << "Result: " << result << std::endl;

  // subtraction
  result = number2 - number1;
  std::cout << "Result: " << result << std::endl;

  // Multiplication
  result = number1 * number2;
  std::cout << "Result: " << result << std::endl;

  // Division
  result = number2 / number1;
  std::cout << "Result: " << result << std::endl;

  // Modulus
  result = number2 % number1;
  std::cout << "Result: " << result << std::endl;

  return 0;
}