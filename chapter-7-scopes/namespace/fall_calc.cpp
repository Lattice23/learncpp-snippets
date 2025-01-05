#include <iostream>
#include "header.h"

namespace act = fall::test;

int main(){
  double x { act::getMeters() };
  double y { act::getSeconds() };
  double z { act::getGravity() };

  fall::test::print(x,y,z);
  
}
