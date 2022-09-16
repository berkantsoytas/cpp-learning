#include <iostream>

int main()
{
  // Array of const pointer to const char
  const char *students[]{
      "Berkant Soytas",
      "Tuna Philbe",
      "Daniel Gray",
      "The Rock",
      "John Dick",
      "Rey Mysterio",
  };

  // Print out the students
  std::cout << std::endl;
  std::cout << "Printing out the students: " << std::endl;
  for (const char *student : students)
  {
    std::cout << student << std::endl;
  }

  // Can swap pointers though

  const char *new_student{"Bob Marley Faruk"};
  // students[0] = new_student; error

  std::cout << std::endl;
  for (const char *student : students)
  {
    std::cout << student << std::endl;
  }
  return 0;
}