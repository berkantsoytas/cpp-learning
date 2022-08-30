#include <iostream>

int main()
{
  std::string country;

  std::cout << "Where do you live?" << std::endl;
  std::cin >> country;
  std::cout << "I've heard great thing about " << country << ". I'd like to go sometime.";

  return 0;
}