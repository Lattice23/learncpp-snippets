#include <iostream>
#include <string_view>

// enum class
enum class Animals
{
  pig, 
  chicken, 
  goat, 
  cat, 
  dog, 
  duck,
};

// correspond the animal to the string value
std::string_view getAnimalName(const Animals& animal)
{  using enum Animals;
   switch ( animal )
   {
     case pig    :  return "pig"    ;
     case chicken:  return "chicken";
     case goat   :  return "goat"   ;
     case cat    :  return "cat"    ;
     case dog    :  return "dog"    ;
     case duck   :  return "duck"   ;
     default     :  return "???"    ;
     break;
   }
   return "???";
}

// correspond the animal to the number of legs
auto printNumberOfLegs(const Animals& animal)
{  
   using enum Animals;
   switch ( animal )
   {
     case pig    :
     case goat   :
     case cat    :
     case dog    :  return 4 ;
     break;

     case duck   :
     case chicken:  return 2 ;
     break;

     default     :  return 0 ;
   }
   return 0;
}

// Function to print the output DRY CODE
void print(const Animals& animal)
{
  std::cout << "A " << getAnimalName(animal)  << " has "  << printNumberOfLegs(animal) << " legs\n";
}

// MAN
int main(){

  Animals animal {Animals::cat};
  Animals animal2 {Animals::chicken};

  print(animal);
  print(animal2);

  return 0;
}
