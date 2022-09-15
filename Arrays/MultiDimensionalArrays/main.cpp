#include <iostream>

int main()
{
  // Declaring 2d int array
  int packages[4][3]; // occupies

  std::cout << "Size of packages: " << sizeof(packages) << std::endl;

  // Element count in packages will be 4. Because packages contains 4 rows and 3
  // columns, we can say that packages contains 4 items, each of which contains three items.
  std::cout << "element count in packages: " << std::size(packages) << std::endl;

  // The 2d array contains garbage data by default, lets print it out
  // Using hardcoded values 4 and 3 (magic numbers)
  std::cout << std::endl;
  std::cout << "Print out un-initialized array using magic numbers for dimensions: " << std::endl;
  for (size_t i{0}; i < std::size(packages); ++i)
  {
    for (size_t j{0}; j < std::size(packages[i]); ++j)
    {
      std::cout << "Item (" << i << ", " << j << "): " << packages[i][j] << "\n";
    }
  }

  // Initializing the array with data

  int packages1[4][3]{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
      {10, 11, 12}};

  // If we print it, we'll see the numbers
  // Print packages1
  std::cout << std::endl;
  std::cout << "Printing out initialized 2d array packages1: " << std::endl;
  for (size_t i = 0; i < std::size(packages1); ++i)
  {
    for (size_t j = 0; j < std::size(packages1[i]); ++j)
    {
      std::cout << "Item (" << i << "," << j << "): " << packages1[i][j] << std::endl;
    }
  }

  // Declaring a 3d array
  // 3D arrays are defined in the same way. We just use three sets of indexes
  // 3 Lights per room, 5 rooms per house 7 houses per block
  int house_block[7][5][3]{
      {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
      {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
      {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
      {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}, {58, 59, 60}},
      {{61, 62, 63}, {64, 65, 66}, {67, 68, 69}, {70, 71, 72}, {73, 74, 75}},
      {{76, 77, 78}, {79, 80, 81}, {82, 83, 84}, {85, 86, 87}, {88, 89, 90}},
      {{91, 92, 93}, {94, 95, 96}, {97, 98, 99}, {100, 101, 102}, {103, 104, 105}},
  };

  std::cout << std::endl;
  for (size_t i = 0; i < std::size(house_block); i++)
  {
    for (size_t j = 0; j < std::size(house_block[i]); j++)
    {
      std::cout << "[ ";
      for (size_t k = 0; k < std::size(house_block[i][j]); k++)
      {
        std::cout << house_block[i][j][k] << " ";
      }
      std::cout << "]";
    }
    std::cout << std::endl;
  }

  // Omitting dimensions out
  // You can omit the number of elements inside an [] when declaring a multi dimensiol
  // array but only one, and it has to be the left most.
  // int packages2 [] [num_cols] will work, but int packages2 [] [] won't work and give a
  // compile error

  // const size_t num_rows{4};
  const size_t num_cols{3};
  int packages2[][num_cols]{
      {1, 2, 3},
      {4, 5, 6},
      {10, 11, 12},
      {100, 101, 102}};

  std::cout << std::endl;
  std::cout << "Omitting left most dimension for 2d array: " << std::endl;
  for (size_t i{0}; i < std::size(packages2); ++i)
  {
    for (size_t j = 0; j < std::size(packages2[i]); j++)
    {
      std::cout << "Item (" << i << "," << j << "): " << packages2[i][j] << std::endl;
    }
  }

  // For 3d and really any multi dimensional array, you have to specify
  // the number of elements in []'s, only the left most is not mandatory.
  // Below is the example for 3D reproduced. Omitting the 5 or the 3 or bot will cause compile error

  int house_block1[][5][3]{
      {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
      {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
      {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
      {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}, {58, 59, 60}},
  };

  // auto filling
  int house_block2[][5][4]{
      {{1, 2, 3}, {4}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}}, // The one element array will be autofilled, with zeros to complete 4 elements
      {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
      {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
      {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57} /*, {58, 59, 60}*/},
  };

  std::cout << std::endl;
  std::cout << "Printing out 3d house_block1 array with defaulted elements : " << std::endl;

  for (size_t i{0}; i < std::size(house_block1); ++i)
  {

    for (size_t j{0}; j < std::size(house_block1[i]); ++j)
    {

      std::cout << "[";
      for (size_t k{0}; k < std::size(house_block1[i][j]); ++k)
      {

        std::cout << house_block1[i][j][k] << " ";
      }
      std::cout << "] "; // Separate elements for good visualization
    }
    std::cout << std::endl; // Separate elements for good visualization
  }

  // modifying elements
  house_block2[1][2][2] = 100;

  std::cout << std::endl;
  std::cout << "Printing out 3d house_block2 array with defaulted elements : " << std::endl;

  for (size_t i{0}; i < std::size(house_block2); ++i)
  {

    for (size_t j{0}; j < std::size(house_block2[i]); ++j)
    {

      std::cout << "[";
      for (size_t k{0}; k < std::size(house_block2[i][j]); ++k)
      {

        std::cout << house_block2[i][j][k] << " ";
      }
      std::cout << "] "; // Separate elements for good visualization
    }
    std::cout << std::endl; // Separate elements for good visualization
  }
  return 0;
}