#ifndef ESCARGOT_H
#define ESCARGOT_H

#include <iostream>
#include "robot.h"
#include "traceur.h"


class RobotEscargot : public RobotTraceur
{
  public :
    RobotEscargot();
    void avancer(double distance);
    //void montrer();
};


#endif
