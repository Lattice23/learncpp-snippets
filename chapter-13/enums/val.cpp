#include "val.h"

int main(){

  // Clear the screen
  system("clear");
  
  // Make while loop to constantly print
  while( true )
  {
  
  // Prompt the user for a number
  Slots slot{}              ;
  std::cout << "valorant> " ;
  std::cin  >> slot         ;
  
  // Invalid input checking
  if ( !std::cin )
  { 
     std::cin.clear() ;
     std::cin.ignore();
     continue;
  }
  
  // Pring the slot name
  std::cout << slot;
  }

  return 0;
}
