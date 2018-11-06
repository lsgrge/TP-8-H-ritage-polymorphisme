#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>

/*------------------------------------------------*/

class Robot{
  public :
    Robot(char aspect);
    virtual void avancer(double distance);
    virtual void montrer();

    virtual ~Robot() = default;

  protected :
    char m_aspect;
    double m_position;
};


#endif //ROBOT_H
