#include "index.h"

int main(){
  
  srand( time(0) ); 
  std::vector arr{( (rand() % 9) +1),
                  ( (rand() % 9) +1),
                  ( (rand() % 9) +1),
                  ( (rand() % 9) +1),
                  ( (rand() % 9) +1),
                  ( (rand() % 9) +1)};
  
  std::size_t value {askValue()};
  printArray(arr);
  search(arr, value);
  
}
