#include <iostream>

int main()
{
  // Increment / Decrement pointer addresses manually

  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int *p_scores{scores};

  std::cout << "Valeus in scores array (p_score pointer increment): " << std::endl;

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd60 value: 11
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd64 value: 12
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd68 value: 13
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd6c value: 14
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd70 value: 15
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; // Address: 0xc8077ffd74 value: 16
  ++p_scores;                                                                     // Moves forwad by sizeof(int): 4bytes

  // Explicit Addition of Integer
  std::cout << std::endl;
  std::cout << "Explicit addition of integer: " << std::endl;
  p_scores = scores;                                          // Reset the pointer to the start of the array
  std::cout << "scores[4]: " << *(p_scores + 4) << std::endl; // Moves forward by 4*sizeof(int)

  // Can use loops to print these things out: easier
  p_scores = scores;

  std::cout << std::endl;
  std::cout << "Pointer arithmetic on p_scores pointer and a for loop: " << std::endl;
  for (size_t i{0}; i < std::size(scores); ++i)
  {
    std::cout << "Value: " << *(p_scores + i) << std::endl;
  }

  // Pointer arithmetic on array name
  // Can also do arithmetic on the array name just like
  p_scores = scores;

  std::cout << std::endl;
  std::cout << "Pointer arithmetic on array name: " << std::endl;

  for (size_t i{0}; i < std::size(scores); ++i)
  {
    std::cout << "Value: " << *(scores + i) << std::endl;
  }

  // Pointer arithmetic : Reverse Order
  // Can print the elements in reverse order

  std::cout << std::endl;
  std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;
  for (size_t i{std::size(scores)}; i > 0; --i)
  {
    std::cout << "Value: " << *(scores + i - 1) << std::endl; // Here we do the -1 thing, because scores is already pointing to the first element in the array.
  }

  // Print in reverse order with --operator on p_score
  std::cout << std::endl;
  std::cout << "Elements in reverse order --arithmetic on the p_scores pointer: " << std::endl;
  p_scores = scores + std::size(scores) - 1;
  for (int i = std::size(scores) - 1; i >= 0; i--)
  {
    std::cout << "Value: " << *(p_scores--) << std::endl;
  }

  // Array index notation

  // Can print the elements in reverse order with array index
  std::cout << std::endl;
  std::cout << "Elements in reverse order with array index notation: " << std::endl;
  for (size_t i{std::size(scores)}; i > 0; --i)
  {
    std::cout << "Value: " << scores[i - 1] << std::endl;
  }

  // Print in increasing orderof index using array index notation
  std::cout << std::endl;
  std::cout << "Elements in increasing order using the array name and a for loop: " << std::endl;
  for (size_t i{0}; i < std::size(scores); ++i)
  {
    std::cout << "Value: " << scores[i] << std::endl;
  }

  // Modify Elements of Array

  // Can also use these syntaxes to modify elements of the array
  // Regular array format and pointer arithmetic

  p_scores = scores;
  scores[0] = 31;       // Array of index notation
  *(scores + 1) = 32;   // Equivalent to scores[1] = 32. Pointer arithmetic on array name
  *(p_scores + 2) = 33; // Equivalent to scores[2] = 32. Pointer arithmetic on array name

  std::cout << std::endl;

  std::cout << "Printing out the array after modification of 3 first elements: " << std::endl;
  for (size_t i = 0; i < std::size(scores); i++)
  {
    std::cout << "Value: " << scores[i] << std::endl;
  }

  return 0;
}