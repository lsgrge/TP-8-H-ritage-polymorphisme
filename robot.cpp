#include "robot.h"


Robot::Robot(char aspect) : m_aspect{aspect}, m_position{0}
{}

//Robot::~Robot(){}


void Robot::avancer(double distance)
{
  m_position += distance;
}

void Robot::montrer()
{
  //for(int i = 0; i<m_position; i++)
  //{ *i
  std::cout << std::string(m_position, ' ') << m_aspect << std::endl;
  //}

}
