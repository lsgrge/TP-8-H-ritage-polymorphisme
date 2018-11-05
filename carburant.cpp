#include <iostream>
#include "robot.h"
#include "traceur.h"
#include "carburant.h"

RobotCarburant::RobotCarburant(char aspect, char trace, int carbu) : RobotTraceur{aspect, trace}, m_carburant{carbu}
{}

void RobotCarburant::avancer(int distance)
{
  if(m_position < m_carburant)
    m_position += distance;
}
