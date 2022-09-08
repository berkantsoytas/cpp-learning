#include <iostream>

int main() {
  for (unsigned char i{0}; i < 255; ++i) {
    if (i > 0x40 && i < 0x5B) {
      std::cout << i;
      if (i != 'Z') {
        std::cout << " ";
      }
    }
  }
}