#include <iostream>
// Just another calculator

double getInput()
{
  double input{};
  std::cout << "Enter a number: ";
  std::cin >> input;

  return input;
}

char getSymbol()
{
  char symbol{};
  std::cout << "Enter a symbol: ";
  std::cin >> symbol;
  

  return symbol;
}

void calculate(double num1,double num2,char symbol)
{
  double results{};
  
  switch (symbol)
  {
    case '+':
      results = num1+num2;
      break;

    case '-':
      results = num1-num2;
      break;
      
    case '*':
      results = num1*num2;
      break;
    
    case '/':
      results = num1/num2;
      break;
    
    default:
      std::cout << "There was an error calculating\n";
      return;
  }

  std::cout << "The results are in: " << results << '\n';
}


int main(){
  

  double  x      { getInput() };
  double  y      { getInput() };
  char symbol    { getSymbol()};

  calculate(x,y,symbol);
}
