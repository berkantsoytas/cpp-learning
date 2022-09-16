#include <iostream>

int main()
{
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *p_score{scores};

  // Print the address
  std::cout << "scores: " << scores << std::endl;   // Array
  std::cout << "p_score: " << p_score << std::endl; // Pointer

  // Print the content at that address

  std::cout << std::endl;
  std::cout << "Printing out data at array address: " << std::endl;
  std::cout << "*scores: " << *scores << std::endl;
  std::cout << "scores[0]: " << scores[0] << std::endl;
  std::cout << "*p_score : " << *p_score << std::endl;
  std::cout << "p_score[0]: " << p_score[0] << std::endl;

  int number{21};
  p_score = &number;

  std::cout << "p_score : " << p_score << std::endl; // Pointer

  // The array name is a pointer, but a special pointer that kind of identifies
  // the entrie array. Yo'll get the error: incompatible types in assignment
  // of 'int*' to 'int[10]'
  // scores = &number;

  // std::size doesn't work for raw pointers
  std::cout << "size: " << std::size(scores) << std::endl;
  // std::cout << "size: " << std::size(p_score) << std::endl; // compile error

  return 0;
}