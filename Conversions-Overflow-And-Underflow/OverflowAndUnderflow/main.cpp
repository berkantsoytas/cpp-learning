#include <iostream>

int main()
{
  /*                             GENERAL THOUGHTS
    . Overflow and underflow are not only limited to char or integral types in general.

    . It happens even on floating types, it was just easier to demonstrate it using the smallest
      possible integral type we can get our hands on: char. We just made it unsigned to, again,
      make it easier to demonstrate underflow.

    . As a general guideline, always be mindful of the valid range for the values you assign
      to the fundamental types we've learnt about. If in doubt, the <limits> header has
      utilities you can use to query the limits for your types.

    . The compiler will sometimes throw warnings about overflows and underflows in your code.
      Keep an eye out for that.
  */

  // Overflow
  unsigned char data{250};

  ++data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;
  ++data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;
  ++data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;
  ++data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;
  ++data;
  std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl; // 255

  ++data;                                                        // Overflow
  std::cout << "data : " << static_cast<int>(data) << std::endl; // 256
  std::cout << std::dec;

  data = 1;
  --data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;
  --data;
  std::cout << "data : " << static_cast<int>(data) << std::endl;

  return 0;

  return 0;
}