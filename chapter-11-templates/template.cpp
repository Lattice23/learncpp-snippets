#include <iostream>

template <typename Z, typename U>
auto max(Z x, U y)
{
  return (x > y) ? x : y;

}


int main(){
  

  std::cout << max(15,112)    << '\n';
  std::cout << max(25,16)     << '\n';
  std::cout << max(20.3,14)   << '\n';
  std::cout << max(16,1)      << '\n';

}
