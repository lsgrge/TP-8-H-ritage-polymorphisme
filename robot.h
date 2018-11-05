#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>

/*------------------------------------------------*/

class Robot{
  public :
    Robot(char aspect);
    ~Robot();
    void avancer(int distance);
    void montrer();


  protected :
    char m_aspect;
    int m_position;
};


#endif //ROBOT_H
