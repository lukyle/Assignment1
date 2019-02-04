/* 
 * File: CrazyRandomSword.h
 * Author: Kyle Lu kjl17@my.fsu.edu
 * 
 * Created on February 3rd, 2019
 */
#include <ctime>
#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = random number from 7-100, ignore random amount of integer armor points from 2 to a third of armor weapon hits)
 */
class CrazyRandomSword : public Weapon {
public:
	srand(time(0));
    CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 94 + 7) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and random number from 7-100
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD */

