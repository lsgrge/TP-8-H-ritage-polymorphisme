#ifndef TELEPORTEUR_H
#define TELEPORTEUR_H

#include <iostream>
#include "robot.h"

class RobotTeleporteur : public Robot
{
  public :
    RobotTeleporteur(char aspect);
    void teleporter(int position);
};


#endif //TELEPORTEUR_H
