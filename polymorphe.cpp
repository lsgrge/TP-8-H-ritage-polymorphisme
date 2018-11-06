#include "polymorphe.h"


void testRobotPolymorphe(Robot& r)
{
  for (int i=0; i<8; ++i)
  {
    r.montrer();
    r.avancer(1);
  }

}


void testConteneurPolymorphe()
{
  std::list<Robot*> bots;

  remplirConteneurPolymorphe(bots);
  utiliserConteneurPolymorphe(bots);
  viderConteneurPolymorphe(bots);

}

void remplirConteneurPolymorphe(std::list<Robot*> bots)
{
    bots.push_back(new Robot{'A'});
    bots.push_back(new RobotTeleporteur{'B'});
    bots.push_back(new RobotRapide{'C'});
    bots.push_back(new RobotTraceur{'D', '.'});
    bots.push_back(new RobotCarburant{'E', '-', 5});
    bots.push_back(new RobotEscargot);
}

void utiliserConteneurPolymorphe(std::list<Robot*> bots)
{
  for(int i = 0; i<8; i++)
  {
    std::cout << "====================\n";
    for(auto pbots : bots)
    {
      pbots->montrer();
      pbots->avancer(1);
    }
  }
}


void viderConteneurPolymorphe(std::list<Robot*> bots)
{
  for(const auto& pbots : bots)
    delete pbots;
}
