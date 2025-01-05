#include <iostream>

namespace lattice {
  
 void swap(int& larger,int& smaller)
  {
    int temp{larger};
    larger = smaller;
    smaller = temp;
  }
}


int askNumber()
{
  int input{};
  std::cout << "Enter the integer: ";
  std::cin >> input;

  return input;
}

int main(){

  int smaller {  };
  int larger  {  };

  std::cout << "Enter a integer: ";
  std::cin >> smaller;

  std::cout << "Enter a larger integer: ";
  std::cin >> larger;

  if (smaller > larger)
  {

    /*int temp{larger};
    larger = smaller;
    smaller = temp;*/
    lattice::swap(larger,smaller);
    std::cout << "Swapping integers\n";
  }

  std::cout << "The larger value is: " << larger << '\n'
            << "The smaller value is: " << smaller << '\n';

}
