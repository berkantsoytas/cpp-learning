#include <iostream>

int main()
{
  double length, width, height;

  std::cout << "Length: ";
  std::cin >> length;

  std::cout << "Width: ";
  std::cin >> width;

  std::cout << "Height: ";
  std::cin >> height;

  double base_area = width * length;
  double volume = base_area * height;

  std::cout << "The base are is: " << base_area << "\nThe volume is: " << volume << std::endl;

  return 0;
}