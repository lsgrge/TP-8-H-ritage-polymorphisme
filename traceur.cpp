#include "robot.h"
#include "traceur.h"


RobotTraceur::RobotTraceur(char aspect, char trace) : Robot{aspect}, m_trace{trace}
{}

void RobotTraceur::montrer()
{
  std::cout << std::string(m_position, m_trace) << m_aspect << std::endl;
}
