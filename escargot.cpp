#include <iostream>
#include "robot.h"
#include "traceur.h"
#include "escargot.h"


RobotEscargot::RobotEscargot() : RobotTraceur{'@', '_'}
{}

void RobotEscargot::avancer(int distance)
{
  if(((m_position+distance)%2 == 0) || m_position == 0)
    m_position += distance;
}
/*
void RobotEscargot::montrer()
{

}
*/
