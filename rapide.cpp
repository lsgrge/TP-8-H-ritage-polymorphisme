#include "robot.h"
#include "rapide.h"


RobotRapide::RobotRapide(char aspect) : Robot{aspect}
{}


void RobotRapide::avancer(double distance)
{
  m_position += distance *2;
}
