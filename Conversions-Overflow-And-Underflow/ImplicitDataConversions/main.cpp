#include <iostream>

int main()
{
  //	. The compiler applies implicit conversions
  // 		when types are different in
  //		an expression
  //	. Conversions are always done from the smallest
  //		to the largest type in this case int is
  //		transformed to double before the expression
  //		is evaluated.Unless we are doing an assignment

  double price{45.6}; // 8 byte
  int units{10};      // 4 byte

  double total_price = price * units;
  auto total_price2 = price * units; // units will be implicitly converted to double

  std::cout << "Total price: " << total_price << std::endl;
  std::cout << "sizeof total_price: " << sizeof(total_price) << std::endl;   // 8 byte
  std::cout << "sizeof total_price2: " << sizeof(total_price2) << std::endl; // 8 byte

  //  Implicit conversions in assignments
  //  The assignment operation is going to cause an implicit
  //  narrowing conversion , y is converted to int before assignment

  int x;
  double y{45.44};
  x = y;
  std::cout << "The value of x is: " << x << std::endl;
  std::cout << "sizeof(x): " << sizeof(x) << std::endl; // 4 byte

  return 0;
}