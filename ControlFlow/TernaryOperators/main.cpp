#include <iostream>

int main()
{

  int max{};

  int number1{35};
  int number2{200};

  std::cout << std::endl;
  std::cout << "using regular if " << std::endl;

  max = (number1 > number2) ? number1 : number2; // Ternary operator

  std::cout << "max : " << max << std::endl;

  return 0;
}