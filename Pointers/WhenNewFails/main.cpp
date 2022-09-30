#include <iostream>

int main()
{
  // Checking for failed memory allocations
  // * Through the exception mechanism
  // * The std::nothrow setting

  // Handling the exception
  /*
    Handle the problem in a way that makes sense for your application.
    For example if you were trying to allocate memory to stroe color information
    for your application, and allocation fails, you could opt for showing some
    feedback message to the user, and rendering your app in black/white.
  */

  // int * data = new int[10000000000000000]; //
  // for (size_t i{0}; i < 10000000; ++i)
  // {
  //   int *data = new int[100000000];
  // }

  // exception

  // for (size_t i{0}; i < 100; ++i)
  // {
  //   try
  //   {
  //     int *data = new int[1000000000];
  //   }
  //   catch (std::exception &ex)
  //   {
  //     std::cout << "  Something went wrong : " << ex.what() << std::endl;
  //   }
  // }

  // std::nothrow
  for (size_t i{0}; i < 100; ++i)
  {

    int *data = new (std::nothrow) int[1000000000];

    if (data != nullptr)
    {
      std::cout << "Data allocated" << std::endl;
    }
    else
    {
      std::cout << "Data allocation failed" << std::endl;
    }
  }

  std::cout << "Program ending well" << std::endl;

  return 0;
}