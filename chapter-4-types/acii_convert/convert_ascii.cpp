#include <iostream>
// Converts acii characters to the corresponding number

char print()
{
  char input{};
  std::cout << "Enter a character: ";
  std::cin >> input;

  return input;
}


int main(){

  char character  { print() };
  int  character2 { character };

  std::cout << "The ASCII character is: " << character 
            << "\nThe ASCII number is: " << character2 << '\n';
}
