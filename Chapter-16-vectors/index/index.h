#include <iostream>
#include <vector>
#include <bits/stdc++.h>


// Print the array
void printArray(std::vector<int>& arr)
{
  std::cout << "Randomized Array = [";
  for ( std::size_t i : arr)
  {
    std::cout << i << ", ";
  }
  std::cout << "\b\b" << "" << "]\n\n";
}

// Ask user for a number 1-9
std::size_t askValue()
{ 
  std::size_t num{};
  do {
    
    std::cout << "Enter a number 1-9: ";
    std::cin >> num;

// Handle bad input
    if (!std::cin)
    {
      std::cin.clear();
      std::cin.ignore(100, '\n');
      continue;
    }

  } while(num < 1 || num > 9);
  
  return num;
}

// Overload the << operator so we can print vector elements
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& arr)
{ 
  out << "[";
  for ( int i{}; i < arr.size(); i++)
  {
    out << arr[i] << ", ";
  }
  // remove the last two characters ", " and close the bracket 
  out << "\b\b" << "" << "]";
  return out;
}

// Search for the number inside the array
template <typename T,typename U>
void search(std::vector<T> arr, U match)
{ 
  // Used to check if a match was found
  bool verify {false};
  std::vector<T> hold{};
  for ( int i{}; i < arr.size(); i++ )
  { 
    if (match == arr[i])
    { 
      hold.push_back(i+1);
      arr[i] = 0;
      verify = true;
    }
  }

  if (!verify)
  {
    std::cout << "No match was found for " << match << '\n';
    return;
  }
  
  if (hold.size() > 1)
  {
    std::cout << "Matches of " << match << " were found on indexes: " << hold << '\n';
    return;
  }
  else
      std::cout << match << " found on index " << hold[0] << '\n';
}

