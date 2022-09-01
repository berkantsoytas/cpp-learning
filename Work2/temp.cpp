#include <iostream>

int main()
{
  std::cout << "Please enter a degree valeu in Celc: ";
  double cel;
  std::cin >> cel;
  double fahr = (9.0 / 5) * cel + 32;
  std::cout << cel << " Celcuis is " << fahr << " Fahrenheit.";

  return 0;
}