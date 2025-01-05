#include <iostream>
#include <cmath>





// Get integer bit size
int bitSize()
{

  std::int size{};
  std::cout << "What is the bit size of the integer: ";
  std::cin >> size;

  return size;
}

// Print the calculated value
void printValue(int value)
{
  --value;
  std::cout << "The range of a " << value+1 << "-bit signed integer is: "
            << pow(-2,value) << " to " <<  pow(2,value) - 1 << '\n';
}
