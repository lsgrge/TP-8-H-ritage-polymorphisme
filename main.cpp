#include <iostream>
#include "robot.h"
#include "teleporteur.h"
#include "rapide.h"
#include "traceur.h"

void testRobot();


int main()
{
  testRobot();
  std::cout << std::endl;

  RobotTraceur s{'D', '.'};
  for(int i= 0; i<8; i++)
  {
    s.montrer();
    s.avancer(1);
  }


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
