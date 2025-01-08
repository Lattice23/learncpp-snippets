#include <iostream>


enum class Monsters
{
  ogre,
  dragon,
  orc,
  giant_spider,
  slime,
};

struct Monster 
{ 
  std::string name {};
  Monsters type     {};
  int     health   {};
};

std::string_view format(const Monsters& monst)
{
      switch( monst )
      {
        case Monsters::giant_spider: return "giant_spider";       
        case Monsters::ogre        : return "ogre"        ;       
        case Monsters::dragon      : return "dragon"      ;       
        case Monsters::slime       : return "slime"       ;
        default          : return "???"         ;
      }
    return "???";
}

/*std::ostream& operator<<(std::ostream& out, Monsters& monst)*/
/*{*/
/*  out << format(monst);*/
/**/
/*  return out;*/
/*}*/

std::ostream& operator<<(std::ostream& out, Monster* const monster)
{
  out << "\nName: "     << monster -> name
      << "\nHealth: "   << monster -> health
      << "\nType: "     << format(monster -> type);

  return out;
} 

void printMonster(Monster& monster)
{
  std::cout << "This " << format(monster.type) << " is named " << monster.name << " and has " << monster.health << " health\n";
}

int main(){ 
  
  Monster ogre  {"bill",Monsters::ogre,60};
  Monster slime {"joe",Monsters::slime,40};

  printMonster(ogre);
  printMonster(slime);
  
  return 0;
}
