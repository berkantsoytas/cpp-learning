#include <iostream>

int main()
{
  // Presedence: Which operation to do first.
  // Associativity: Which direction or which order.
  // https://en.cppreference.com/w/cpp/language/operator_precedence

  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  // In fact, only simple math (operation priority) division, multiplication, addition or subtraction continues in this order.
  int result = a + b * c - d / e - f + g; // 6+24-3-2+5
  std::cout << "Result: " << result << std::endl;

  result = a / b * c + d - e + f; //   16 + 9 - 3 + 2
  std::cout << "Result : " << result << std::endl;

  result = (a + b) * c - d / e - f + g;               // 72-3-2+5 - (A = 6 + B = 3) * C = 9 = 72, (D = 9 / E = 3) = 3, F = 2, G = 5;
  std::cout << "Result () : " << result << std::endl; // 72

  return 0;
}