#include <iostream>
#include <string_view>
#include <bits/stdc++.h>

enum Archetype
{
  astrologer,
  vagabond,
  prisoner,
  samurai,
  prophet,
  wretch,
};

// Eldenring struct with default randomized values
struct Tarnished
{
  unsigned int dexterity {rand() % 100u};
  unsigned int strength  {rand() % 100u};
  unsigned int vigor     {rand() % 100u};
  unsigned int mind      {rand() % 100u};
  std::string name       {"undefined"};
  Archetype archetype    {static_cast<Archetype>(rand() % 6)};
};

// Return the name of the correspoding enumeration
std::string_view format(const Archetype& arch)
{
    switch ( arch )
    {
       case astrologer:   return "astrologer";
       case vagabond  :   return "vagabond"  ;
       case prisoner  :   return "prisoner"  ;
       case samurai   :   return "samurai"   ; 
       case prophet   :   return "prophet"   ; 
       case wretch    :   return "wretch"    ;
       default        :   return "???"       ;
    }
    return "???" ;
}

// Overload << for enums 
std::ostream& operator<<(std::ostream& out, const Archetype& arch)
{
  out << format(arch);
  return out;
}

// Overload << for structs
std::ostream& operator<<(std::ostream& out, const Tarnished& tarnished)
{
  out << "Name     : "    <<  tarnished.name
      << "\nArchetype: "  <<  tarnished.archetype 
      << "\nDexterity: "  <<  tarnished.dexterity
      << "\nStrength : "  <<  tarnished.strength 
      << "\nVigor    : "  <<  tarnished.vigor    
      << "\nMind     : "  <<  tarnished.mind;
  return out;
}
