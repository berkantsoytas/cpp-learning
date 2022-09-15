#include <iostream>

int main()
{
  // int random_num = std::rand();
  // std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
  // random_num = std::rand();
  // std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX

  // Generate random number in a loop

  // unsigned short random_num{0};
  // for (size_t i{0}; i < 20; ++i)
  // {
  //   random_num = std::rand();
  //   std::cout << "random_num " << i << ":" << random_num << std::endl; // 0 ~ RAND_MAX
  // }

  // GENERATE A RANGE BETWEEN 0 AND 10
  // unsigned short random_num{0};

  // for (size_t i{0}; i < 20; ++i)
  // {
  //   random_num = std::rand() % 11;
  //   std::cout << "random_num " << i << ": " << random_num << std::endl; // 0 ~ 10
  // }

  int random_num = std::rand() % 10 + 1; // [1~10]
  for (size_t i{0}; i < 20; ++i)
  {
    random_num = std::rand() % 10 + 1;
    std::cout << "random_num " << i << "  :   " << random_num << std::endl; // [1~10]
  }

  return 0;
}