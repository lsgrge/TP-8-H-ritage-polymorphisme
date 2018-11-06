#ifndef POLYMORPHE_H
#define POLYMORPHE_H

#include <iostream>
#include <list>
#include "robot.h"
#include "rapide.h"
#include "teleporteur.h"
#include "traceur.h"
#include "carburant.h"
#include "escargot.h"

void testRobotPolymorphe(Robot& r);
void testConteneurPolymorphe();
void remplirConteneurPolymorphe(std::list<Robot*> bots);
void utiliserConteneurPolymorphe(std::list<Robot*> bots);
void viderConteneurPolymorphe(std::list<Robot*> bots);

#endif
