#include <iostream>
#include <vector>
#include <print>

#define IN 
#define OUT

// Write your printElement function here
template <typename T>
void printElement(IN OUT std::vector<T> arr, int index)
{
  if ( index >= arr.size() || index < 0)
  {
    std::cout << "Out of Bounds\n";
    std::exit(1);
  }
  else
    std::print("The element has value {}\n",arr[index]);
}

int main()
{   
    using vnptr = void(*)(std::vector<int>,int);
    vnptr fcnPtr{&printElement};
    std::vector v1 { 0, 1, 2, 3, 4 };
    
    fcnPtr(v1, 2);
    fcnPtr(v1, 5);

    /*std::vector v2 { 1.1, 2.2, 3.3 };*/
    /*printElement(v2, 0);*/
    /*printElement(v2, -1);*/

    return 0;
}
