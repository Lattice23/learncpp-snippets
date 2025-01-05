#include <iostream>
// Make the first argument the smaller number

void sort2(int& x, int& y)
{  

   if( x < y)
    std::exit(0)

   if( x == y)
   {  std::cout << "They are the same value\n";
      std::exit(0);
   }

   int temp{x};
   x=y;
   y=temp;
}

int main(){

  int x{  };
  std::cout << "Enter a number: ";
  std::cin >> x;

  int y{  };
  std::cout << "Enter a number: ";
  std::cin >> y;
  
  sort2(x,y);

  std::cout << x << ' ' << y << '\n';

  return 0;
}
