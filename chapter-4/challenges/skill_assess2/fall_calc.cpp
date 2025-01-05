#include <iostream>
#include "header.h"


int main(){

  double x { getMeters() };
  double y { getSeconds() };
  double z { getGravity() };

  print(x,y,z);
  
}
