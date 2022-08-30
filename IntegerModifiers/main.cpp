#include <iostream>

int main()
{
  signed int value{10};
  signed int value2{-300};

  std::cout << "Value1: " << value << std::endl;
  std::cout << "Value2: " << value2 << std::endl;
  std::cout << "sizeof(value): " << sizeof(value) << std::endl;
  std::cout << "sizeof(value2): " << sizeof(value2) << "\n\n\n"
            << std::endl;

  // unsigned int value3{4};
  //  unsigned int value4{-5}; // error: negative value

  // short and long
  short short_var{-32768};                 //  2 Bytes
  short int short_int{455};                //  2 Bytes
  signed short signed_short{122};          //  2 Bytes
  signed short int signed_short_int{-456}; //  2 Bytes
  unsigned short int unsigned_short_int{456};

  int int_var{55};               // 4 bytes
  signed signed_var{66};         // 4 bytes
  signed int signed_int{77};     // 4 bytes
  unsigned int unsigned_int{77}; // 4 bytes

  long long_var{88};                       // 4 OR 8 Bytes
  long int long_int{33};                   // 4 OR 8 Bytes
  signed long signed_long{44};             // 4 OR 8 Bytes
  signed long int signed_long_int{44};     // 4 OR 8 Bytes
  unsigned long int unsigned_long_int{44}; // 4 OR 8 Bytes

  long long long_long{888};                            // 8 Bytes // Long long: 888, size: 8 bytes
  long long int long_long_int{999};                    // Long long int: 999, size: 8 bytes
  signed long long signed_long_long{444};              // Signed long long: 444, size: 8 bytes
  signed long long int signed_long_long_int{1234};     // Signed long long int: 1234, size: 8 bytes
  unsigned long long int unsigned_long_long_int{1234}; // unsigned long long int: 1234, size : 8 bytes

  std::cout << "Short variable: " << short_var << ", size: " << sizeof(short) << " bytes" << std::endl;
  std::cout << "Short Int: " << short_int << ", size: " << sizeof(short int) << " bytes" << std::endl;
  std::cout << "Signed short: " << signed_short << ", size: " << sizeof(signed short) << " bytes" << std::endl;
  std::cout << "Signed short int:  " << signed_short_int << ", size: " << sizeof(signed short int) << " bytes" << std::endl;
  std::cout << "unsigned short int:  " << unsigned_short_int << ", size: " << sizeof(unsigned short int) << " bytes" << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "Int variable:  " << int_var << ", size: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "Signed variable: " << signed_var << ", size: " << sizeof(signed) << " bytes" << std::endl;
  std::cout << "Signed int:  " << signed_int << ", size: " << sizeof(signed int) << " bytes" << std::endl;
  std::cout << "unsigned int:  " << unsigned_int << ", size: " << sizeof(unsigned int) << " bytes" << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "Long variable: " << long_var << ", size: " << sizeof(long) << " bytes" << std::endl;
  std::cout << "Long int: " << long_int << ", size: " << sizeof(long int) << " bytes" << std::endl;
  std::cout << "Signed long:  " << signed_long << ", size: " << sizeof(signed long) << " bytes" << std::endl;
  std::cout << "Signed long int: " << signed_long_int << ", size: " << sizeof(signed long int) << " bytes" << std::endl;
  std::cout << "unsigned long int: " << unsigned_long_int << ", size: " << sizeof(unsigned long int) << " bytes" << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "Long long: " << long_long << ", size: " << sizeof(long long) << " bytes" << std::endl;
  std::cout << "Long long int: " << long_long_int << ", size: " << sizeof(long long int) << " bytes" << std::endl;
  std::cout << "Signed long long: " << signed_long_long << ", size: " << sizeof(signed long long) << " bytes" << std::endl;
  std::cout << "Signed long long int: " << signed_long_long_int << ", size: " << sizeof(signed long long int) << " bytes" << std::endl;
  std::cout << "unsigned long long int: " << unsigned_long_long_int << ", size : " << sizeof(unsigned long long int) << " bytes" << std::endl;
  std::cout << "---------------------" << std::endl;

  return 0;
}