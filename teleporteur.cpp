#include "robot.h"
#include "teleporteur.h"


RobotTeleporteur::RobotTeleporteur(char aspect) : Robot{aspect}
{}


void RobotTeleporteur::teleporter(double position)
{
  m_position = position;
}
