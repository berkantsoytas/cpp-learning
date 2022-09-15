#include <iostream>

int main()
{
  // Can use normal pointer to char like we've been doing for
  // double, int and anything else really
  char *p_char_var{nullptr};
  char char_var{'A'};

  p_char_var = &char_var;

  std::cout << "The value stored in p_char_var is: " << *p_char_var << std::endl;

  char char_var1{'C'};
  p_char_var = &char_var1;

  std::cout << "The value stored in p_char_var is: " << *p_char_var << std::endl;

  // Initialize with string literal

  // Pointer to char an also do something special.
  // You can initialize with a string literal: C-String
  const char *message{"Hello World!"};

  // Printing out
  // What do we get when we print this out with std::cout
  std::cout << "The message is: " << message << std::endl;

  // What do we when we dereference the pointer
  std::cout << "The value stored at p_message is: " << *message << std::endl;

  char message1[]{"Hello World!"};
  message1[0] = 'B';
  std::cout << "message1: " << message1 << std::endl;

  return 0;
}