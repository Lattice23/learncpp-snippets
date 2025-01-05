#include <iostream>
#include <string>

void printValue(std::string& y)
{
    std::cout << y << &y << '\n';
    y = "changed lol and the address is ";
} // y is destroyed here

int main()
{
    std::string x { "Hello, world! and the address is " }; // x is a std::string

    printValue(x); // x is passed by value (copied) into parameter y (expensive)
    std::cout << x << &x << '\n';
    return 0;
}
