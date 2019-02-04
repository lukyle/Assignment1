/* 
 * File: SimpleHammer.h
 * Author: Kyle Lu kjl17@my.fsu.edu
 * 
 * Created on February 3rd, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, if armor less than 30, ignore all armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

