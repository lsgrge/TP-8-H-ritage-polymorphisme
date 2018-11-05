#include <iostream>
#include "robot.h"
#include "rapide.h"


RobotRapide::RobotRapide(char aspect) : Robot{aspect}
{}


void RobotRapide::avancer(int distance)
{
  m_position += distance *2;
}
