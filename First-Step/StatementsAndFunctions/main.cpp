#include <iostream>

int addNumbers(int first_param, int second_param)
{
  return first_param + second_param;
}

int main()
{
  int first_nmuber{4};
  int second_number{7};

  std::cout << "First number: " << first_nmuber << std::endl;
  std::cout << "Second number: " << second_number << std::endl;

  std::cout << "Sum: " << addNumbers(first_nmuber, second_number) << std::endl;
  std::cout << "Sum: " << addNumbers(20, 22) << std::endl;

  return 0;
}
