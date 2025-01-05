#include <iostream>
#include <string>

std::string askName()
{
  std::string name{};
  std::cout << "Enter your name: ";
  std::getline(std::cin >> std::ws,name);

  return name;
}

int askAge()
{
  unsigned int age{};
  std::cout << "Enter your age: ";
  std::cin >> age;

  return age;
}


int main()
{
  
  std::string name1{askName()};
  std::string name2{askName()};
  
  int age1 { askAge() };
  int age2 { askAge() };

  if(age1 > age2)
  {
    std::cout << name1 << " is older than " << name2 << '\n';
    return 0;
  }
  else if (age2 > age1) {
    std::cout << name2 << " is older than " << name1 << '\n';
    return 0;
  }
  else
  {
    std::cout << "The ages are equal\n";
  }

}
