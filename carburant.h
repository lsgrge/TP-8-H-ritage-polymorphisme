#ifndef CARBURANT_H
#define CARBURANT_H

#include <iostream>
#include "robot.h"
#include "traceur.h"


class RobotCarburant : public RobotTraceur
{
  public :
    RobotCarburant(char aspect, char trace, int carbu);
    void avancer(int distance);
  protected :
    int m_carburant;
};


#endif
