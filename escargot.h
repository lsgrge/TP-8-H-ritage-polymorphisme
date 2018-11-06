#ifndef ESCARGOT_H
#define ESCARGOT_H

#include <iostream>
#include "robot.h"
#include "traceur.h"


class RobotEscargot : public RobotTraceur
{
  public :
    RobotEscargot();
    virtual void avancer(double distance);
};


#endif
