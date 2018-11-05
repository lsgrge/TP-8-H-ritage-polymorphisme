#include <iostream>
#include "robot.h"
#include "teleporteur.h"

void testRobot();


int main()
{
  Robot x{'A'};
  x.avancer(3);
  x.montrer();


  return 0;
}

void testRobot()
{
  Robot x{'A'};
  for (int i=0; i<8; ++i)
  {
    x.montrer();
    x.avancer(1); // Si on mettait 2 ici on irait 2x plus vite !
  }
}
