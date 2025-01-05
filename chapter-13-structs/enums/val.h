#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>

// Slot Numbers
enum Slots : int{
  knife = 1,
  pistol,
  AR,
  spike,
};


// Turn the corresponding slot value into a string
std::string_view format(const Slots& slot)
{
  switch ( slot ) 
  { 
    case knife  : return "knife\n" ;
    case pistol : return "pistol\n";
    case AR     : return "AR\n"    ;
    case spike  : return "Spike\n" ;
    default     : return "???\n"   ;
  }
  return "???";
}

// Turn the slot into a corresponding string return value 
std::ostream& operator<<(std::ostream& out, const Slots& slot)
{
  out << format(slot);
  return out;
}

// Turn the int value into a corresponding slot
std::istream& operator>>(std::istream& in, Slots& slot)
{ 
  /*This will hold the int value from the user*/
  int temp{};
  in >> temp;
  
  /*We can static cast the temp variable to the slot*/
  slot = static_cast<Slots>(temp);
  return in;
}
