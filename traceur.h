#ifndef TRACEUR_H
#define TRACEUR_H

#include <iostream>
#include "robot.h"

class RobotTraceur : public Robot
{
  public :
    RobotTraceur(char aspect, char trace);
    void montrer();
  protected :
    char m_trace;
};


#endif
