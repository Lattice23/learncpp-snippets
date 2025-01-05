#include <iostream>
// prints fizz, buzz, pop,and fizzbuzzpop if divisible by 3,5, and 7.

void fizzBuzz(int value)
{
  for (int i{1}; i <= value; i++)
  { 
    bool track{false};
    if (i % 3 == 0)
    {
      std::cout << "fizz";
      track = true;
    }
    if (i % 5 == 0)
    {
      std::cout << "buzz";
      track = true;
    }
    if (i % 7 == 0)
    {
      std::cout << "pop";
      track = true;
    }
    
    if (!track)
    {
     std::cout << i;
    }
    std::cout << '\n';
  }
}

int main(){
  std::cout << R"( 
 ____  __  ____  ____  ____  _  _  ____  ____ 
(  __)(  )(__  )(__  )(  _ \/ )( \(__  )(__  )
 ) _)  )(  / _/  / _/  ) _ () \/ ( / _/  / _/ 
(__)  (__)(____)(____)(____/\____/(____)(____))" 
<< "\n \t     Welcome To FizzBuzz\n\n";


  int input {};
  std::cout << "Enter a number: ";
  std::cin >> input;

  fizzBuzz(input);
}
