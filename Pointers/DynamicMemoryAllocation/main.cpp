#include <iostream>

/*
    !Stack:
      * Memory is finite
      * The developer isn't in full control of the memory lifetime
      * Lifetime is controlled by the scope mechanism
    !Heap:
      * Memory is finite
      * The developer is in full control of when memory is allocated and when it's released.
      * Lifetime is controlled explicitly through new and delete operators
*/

int main()
{
  // How we've used pointers so far
  int number{22};
  int *p_number = &number;

  std::cout << std::endl;
  std::cout << "Declaring pointer and assigning address: " << std::endl;
  std::cout << "number: " << number << std::endl;
  std::cout << "p_number: " << p_number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "*p_number: " << *p_number << std::endl;

  int *p_number1; // Uninitialized pointer, contains junk address
  int number1{12};

  p_number1 = &number1;

  std::cout << "Uninitialized Pointer: " << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;

  // Bad Things
  // Writing into uninitialized pointer through dereference
  /*
  int *p_number2;
  *p_number2 = 55;

  std::cout << std::endl;
  std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
  std::cout << "p_number2: " << p_number2 << std::endl;
  std::cout << "*p_number2: " << *p_number2 << std::endl;
  */

  // Initializing pointer to null
  // int* p_number3{nullptr} // Also Work
  // int *p_number3{}; // Initialized with pointer equivalent of zero : nullptr
  // A pointer pointing nowhere
  // *p_number3=33; // Writting into a pointer pointing nowhere: BAD, CRASH

  // BAD
  // Writing into uninitialized pointer through dereference
  /*
  int *p_number2; // Contains junk address : could be anything
  std::cout << "Writting in the 55" << std::endl;
  *p_number2 = 55; // Writing into junk address : BAD!
  std::cout << std::endl;
  std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
  std::cout << "p_number2 : " << p_number2 << std::endl; // Reading from junk address.
  std::cout << "Dereferencing bad memory" << std::endl;
  std::cout << "*p_number2 : " << *p_number2 << std::endl;
  */
  /*
  // Initializing pointer to null
  // int *p_number3{nullptr}; // Also works
  int *p_number3{}; // Initialized with pointer equivalent of zero : nullptr
                    // A pointer pointing nowhere
  std::cout << "Writting into nullptr memory" << std::endl;
  // * p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH
  std::cout << "Done writting" << std::endl;

  std::cout << std::endl;
  std::cout << "Reading and writting through nullptr : " << std::endl;
  // std::cout << "p_number3 : " << p_number3 << std::endl;
  // std::cout << "*p_number3 : " << *p_number3 << std::endl;// Reading from nullptr
  //  BAD, CRASH.
  */

  // * Allocate dynamic memory through 'new'
  // Initialize the pointer with dynamic memory. Dynamically allocate, memory
  // at run time and make a pointer point to it

  int *p_number4{nullptr};
  p_number4 = new int; // Dynamically allocate space for a single int on the heap
                       // This memory belongs to our program from now on. The system
                       // can not use it for anything else, untill we return it.
                       // After this line executes, we will have a memory valid memory
                       // location allocated. The size of the allocated memory will be such
                       // that it can store the type pointed to by the pointer.
  *p_number4 = 74;     // Writting into dynamically allocated memory.

  std::cout << std::endl;
  std::cout << "Dynamically allocating memory: " << std::endl;
  std::cout << "*p_number4: " << *p_number4 << std::endl;

  // Releasing and Resetting
  delete p_number4;
  p_number4 = nullptr;

  // Initialize with 'new' upon pointer declaration
  // It is also possible to initialize the pointer with a valid
  // address upp on declaration. Not with a nullptr
  int *p_number5{new int};     // Memory location contains junk value
  int *p_number6{new int(22)}; // use direct initialization
  int *p_number7{new int{23}}; // use uniform initialization

  std::cout << std::endl;
  std::cout << "Initialize with valid memory address at declaration: " << std::endl;
  std::cout << "p_number5: " << p_number5 << std::endl;
  std::cout << "*p_number5: " << *p_number5 << std::endl;

  std::cout << "p_number6: " << p_number6 << std::endl;
  std::cout << "*p_number6: " << *p_number6 << std::endl;

  std::cout << "p_number7: " << p_number7 << std::endl;
  std::cout << "*p_number7: " << *p_number7 << std::endl;

  // Remember to release the memory
  delete p_number5;
  p_number5 = nullptr;

  delete p_number6;
  p_number6 = nullptr;

  delete p_number7;
  p_number7 = nullptr;

  return 0;
}