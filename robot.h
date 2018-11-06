#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>

/*------------------------------------------------*/

class Robot{
  public :
    Robot(char aspect);
    ~Robot();
    void avancer(double distance);
    void montrer();


  protected :
    char m_aspect;
    double m_position;
};


#endif //ROBOT_H
