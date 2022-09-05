#include <iostream>
#include <bitset>
int main()
{
  // NOTE:
  // If data is lost as a result of you shifting bits left(<<) or right(>>), you can't get the data
  // back just by doing the reverse operation. You've just lost the data permanently.

  // GOLDEN RULE OF BIT SHIFTING
  // Shifting left multiplies by 2^n
  // Shifting right divides 2^n
  // This rule breaks if you throw of 1's either to the right or the left.

  unsigned short int value{0xff0u};

  std::cout << "Size of short int " << sizeof(short int) << std::endl;                 // 16 bits
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0000111111110000, dec: 4080

  // Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0001111111100000, dec: 8160

  // Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0011111111000000, dec: 16320

  // Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0111111110000000, dec: 32640

  // Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 1111111100000000, dec: 65280

  // Shift left by one bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 1111111000000000, dec: 65024

  // Shift right by one bit
  value = static_cast<unsigned short int>(value >> 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0111111100000000, dec: 32512

  // Shift by multiple bits in one go
  // Shift right by four bits
  value = static_cast<unsigned short int>(value >> 4);                                 // 2^n = 2^4 = 16; 32512 / 16 = 2032
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl; // value: 0000011111110000, dec: 2032

  return 0;
}