#include "robot.h"
#include "traceur.h"
#include "escargot.h"


RobotEscargot::RobotEscargot() : RobotTraceur{'@', '_'}
{}

void RobotEscargot::avancer(double distance)
{
  m_position += distance/2;
}
/*
void RobotEscargot::montrer()
{
  if(m_position%2 == 0)
  {
    std::cout << std::string((m_position), m_trace) << m_aspect << std::endl;
  }
  else
    std::cout << std::string(m_position-1, m_trace) << m_aspect << std::endl;
}
*/
