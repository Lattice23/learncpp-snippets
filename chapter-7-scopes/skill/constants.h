#pragma once


int accumulate(int number){
  
  static bool ran_already{false};
  static int num {number};
  if (ran_already == false)
  {
    ran_already = true;
    return num;
  }

  return num+=number;

}
