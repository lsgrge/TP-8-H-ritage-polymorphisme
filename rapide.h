#ifndef RAPIDE_H
#define RAPIDE_H

#include <iostream>
#include "robot.h"


class RobotRapide : public Robot
{
  public :
    RobotRapide(char aspect);
    void avancer(double distance);

};


#endif
