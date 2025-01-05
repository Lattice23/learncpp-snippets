#include <iostream>
// Check if even with tenary operator

bool isEven(int number)
{
  return !(number % 2);
}

int askNumber()
{
  int input{};
  std::cout << "Enter the number: ";
  std::cin >>input;

  return input;
}

int main(){

  int x{ askNumber() };
  bool value{ isEven(x) };
  //std::cout << "Is the number even? " << std::boolalpha << isEven(x) << '\n';
  
  value ? std::cout << x << " is even\n" : std::cout << x << " is not even\n";
}
