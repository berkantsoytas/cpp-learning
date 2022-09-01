#include <iostream>
#include <sstream>
#include <string>

/*
  std::cout - printing data to the console (terminal)
  std::cin - reading data from the terminal
  std:cerr - printing errors to the console
  std::clog - printing log messages the console
*/

int main(int argc, char **argv)
{
  // std::cout : Printing stuff to the console
  std::cout << "Hello world!" << std::endl;
  std::cout << "The number is : " << 12 << std::endl;
  int age{23};
  std::cout << "The age is :" << age << std::endl;
  // Error
  std::cerr << "std::cerr output : Something went wrong" << std::endl;
  // Log
  std::clog << "std::clog output : This is a log message" << std::endl;

  // ------
  // reading data with spaces
  int ages;
  std::string full_name;

  std::cout << "Please type in your full name: " << std::endl;
  std::getline(std::cin, full_name);

  std::cout << "Type in your age: " << std::endl;
  std::cin >> ages;

  std::cout << "Hello " << full_name << "! Yo're" << age << " years old." << std::endl;

  return 0;
}