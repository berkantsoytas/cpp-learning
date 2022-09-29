#include <iostream>

int main()
{
  // Case-1 : Uninitialized pointer
  int *p_number; // Dangling uninitialized pointer

  std::cout << std::endl;
  std::cout << "Case 1: Un-initialized pointer: " << std::endl;
  std::cout << "p_number: " << p_number << std::endl; // Undefined Behavior
  // std::cout << "*p_number" << *p_number << st::endl; // CRASH!

  // Case-2: Deleted Pointer
  std::cout << std::endl;
  std::cout << "Case 2: Deleted Pointer: " << std::endl;

  int *p_number1{new int{67}};

  std::cout << "*p_number1 (before delete): " << *p_number1 << std::endl;
  delete p_number1;
  std::cout << "*p_number1 (after delete): " << *p_number1 << std::endl;

  // Case-3: Multiple pointers pointing to same address
  std::cout << std::endl;
  std::cout << "Case 3: Multiple pointers pointing to same address: " << std::endl;

  int *p_number3{new int(83)};
  int *p_number4{p_number3};

  std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
  std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

  // Deleting p_number3
  delete p_number3;

  // p_number4 points to deleted memory, Dereferncing it will lead to
  // undefined behaviour: Crash / garbage or whatever

  // SOLUTIONS
  /*
   * Initialize your pointers
   * Reset pointers after delete
   * For multiple pointers to same address, make sure the owner pointer very clear
   */

  return 0;
}