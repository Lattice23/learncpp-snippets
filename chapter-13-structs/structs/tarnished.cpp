#include "tarnished.h"


std::string_view checkStats(const Tarnished& arch)
{
  if ( (arch.vigor <= 30) && (arch.strength <= 30) && (arch.dexterity <= 30) && (arch.mind <= 30) )
    return "bad ngl";

  return "good";
} // probably never gonna run tbh


// I just wanted to use a pointer lol
void print(Tarnished* tarnished)
{
  std::cout << "\nYour Tarnished Stats: \n" << *tarnished << "\n\nBuild looks... " << checkStats(*tarnished) 
            <<"\nGood Luck out there ye tarnished! lol\n";
}


int main(){
  srand( time(0) );
  Tarnished user {};
  std::cout << R"( 
     
|''||''|                   ||       '||               '||    .|'''.|  .        .         
   ||  ....  ... .... ... ...  ....  || ..   ....   .. ||    ||..  '.||. .....||.  ....  
   || '' .||  ||' ''||  || || ||. '  ||' ||.|...||.'  '||     ''|||. || '' .||||  ||. '  
   || .|' ||  ||    ||  || || . '|.. ||  ||||     |.   ||   .     '|||| .|' ||||  . '|.. 
  .||.'|..'|'.||.  .||. ||.||.|'..|'.||. ||.'|...''|..'||.  |'....|' '|.'|..'|'|.'|'..|'
     .      .
     |\____/|
    (\|----|/)
     \ 0  0 /
      |    |
   ___/\../\____
  /     --       \
 /  \         /   \
|    \___/___/(   |
\   /|  }{   | \  )
 \  ||__}{__|  |  |
  \  |;;;;;;;\  \ / \_______
   \ /;;;;;;;;| [,,[|======'
     |;;;;;;/ |     /
     ||;;|\   |
     ||;;/|   /
     \_|:||__|
      \ ;||  /
      |= || =|
      |= /\ =|
      /_/  \_\
      
Enter thy name: )";
std::cin  >> user.name;

print(&user);

  return 0;
}
