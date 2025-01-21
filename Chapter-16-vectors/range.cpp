#include <iostream>
#include <vector>

int main(){
  
  std::vector names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg","Holly"};

  std::string input{};
  std::cout << "Enter a name: ";
  std::cin >> input;

  bool verify {false};
  for ( const auto& name : names)
      if ( name == input)
      {
        std::cout << name << " Found in the array\n";
        verify = true;
      }
  
  if ( !verify )
        std::cout << "Name not found\n";

  return 0;
}
