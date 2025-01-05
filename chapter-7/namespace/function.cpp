#include <iostream>

namespace fall {
  namespace test {
    
double getMeters()
{
    double meters{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> meters;


    return meters;
}

double getSeconds()
{
    double seconds{};
    std::cout << "Enter the amount of seconds you want: ";
    std::cin >> seconds;

    return seconds;
}

/*double calculate(int seconds)
{
    double distance{ 9.8 * (seconds - seconds) / 2 };

    return distance;
}*/

double getGravity()
{
    double gravity{};
    std::cout << "Enter the the gravity weight (normal is 9.8): ";
    std::cin >> gravity;
    std::cout << '\n';
    return gravity;
}

void print(double height,double seconds, double gravity)
{

  for (double second{ 0 }; second <= seconds; second++)
  {
    double ballHeight { height - gravity * (second * second) / 2.0};
    if ( ballHeight <= 0)
    {
      std::cout << "At " << second << " second(s) the ball hit the ground" << '\n';
      return;
    }
    else {
      
    std::cout << "At " << second << " second(s) the height is: " << ballHeight << 'm' << '\n';
    }
  }
}
}
}
