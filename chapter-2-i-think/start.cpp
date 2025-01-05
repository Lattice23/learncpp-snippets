#include <iostream>
#include "delcare.h"


int main()
{

  char symbol{getOperator()};
  int  number1{getInput()};
  int  number2{getInput()};
  int  value{calculateValues(number1,number2,symbol)};

  printValue(value);


  return 0;
}
