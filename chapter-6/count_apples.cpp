#include <iostream>

std::string_view getQuantityPhrase(unsigned int numApples)
{
  using namespace std::literals::string_literals;
  if (numApples <= 5)
  {
    return "a few"; 
  }
  else if ((numApples > 5) && (numApples <= 10) ) 
  {
    return "got a good ammount of ";
  }
  else if (numApples > 10) 
  {
    return "got a lot of";
  }
  else if (numApples <= 0) 
  {
    return "got no ";
  }
  else 
  {
    return "couldnt evaluate the number of apples";
  }
  
}

std::string_view getApplesPluralized(unsigned int numApples)
{
  using namespace std::literals::string_literals;
  return ((numApples > 0) ? "apples" : "apple");
}

int main(){


    constexpr unsigned int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    unsigned int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";
}
