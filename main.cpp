#include <iostream>
#include "robot.h"
#include "teleporteur.h"
#include "rapide.h"
#include "traceur.h"
#include "carburant.h"
#include "escargot.h"



void testRobot();
void testRobotCarburant();
void testRobotEscargot();

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
  std::cout << std::endl;

  testRobotCarburant();
  std::cout << std::endl;
  testRobotEscargot();

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

void testRobotCarburant()
{
  RobotCarburant x{'E', '-', 5};
  for (int i=0; i<8; ++i)
  {
    x.montrer();
    x.avancer(1);
  }
}

void testRobotEscargot()
{
  RobotEscargot x{};
  for (int i=0; i<8; ++i)
  {
    x.montrer();
    x.avancer(1);
  }
}
