/* 
 * File:   StarCannon.h
 * Author: Kyle Lu kjl17@my.fsu.edu>
 * 
 * Created on February 3, 2019
 */

#include <string>
#include "StarCannon.h"

#ifndef STARCANNON_H
#define STARCANNON_H

/**
 * Defines the behavior of a star cannon (hitpoint = 90, it ignores 40% of armor + RNG from 1-10)
 */
class StarCannon : public Weapon {
public:

    StarCannon() : Weapon("Star Cannon",90.0) //Calls Weapon(name, hitpoints) constructor with values Star Cannon and 90.0
    {
    }

    virtual ~StarCannon() {};

    virtual double hit(double armor);

};

#endif /* STARCANNON_H */

