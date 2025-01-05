#include <iostream>

// #define DEBUG

// Get user input operator
char getOperator()
{
#ifdef DEBUG
std::cerr << "getOperator() called\n";
#endif // DEBUG
  std::cout << "Enter the operator you want (e.g 1 or +)"
            << "\v1. (+)"
            << "\v2. (-)"
            << "\v3. (/)"
            << "\v4. (*)" 
            << "\vEnter Here: ";
  
  char userOperator{};
  std::cin >> userOperator;

  return userOperator;
}           


// Get User input number
int getInput()
{
#ifdef DEBUG
  std::cerr << "getInput() called\n";
#endif // DEBUG
  int input{};
  std::cout << "Enter the interger: ";
  std::cin >> input;

  return input;
}

// Calculate user input values 
int calculateValues(int value1,int value2, char userOperator)
{   
#ifdef DEBUG
  std::cerr << "calculateValues() called\n";
#endif // DEBUG
    // change result depending on operator
    int results{};
    switch(userOperator)
    {
      case '+':
      case '1':
          results = value1 + value2;
      break;

      case '-':
      case '2':
          results = value1 - value2;
      break;

      case '/':
      case '3':
          results = value1 / value2;
      break;

      case '*':
      case '4':
          results = value1 * value2;
      break;

      default:
          std::cout << "CALCULATION FAILED: Please Enter a valid number 1-4 or operator\n";
      break;
    }

    return results;
}

// Print value of user input
void printValue(int value)
{
#ifdef DEBUG
  std::cerr << "printValue() called\n";
#endif // DEBUG
  std::cout << "The value is: " << value << '\n';
}
