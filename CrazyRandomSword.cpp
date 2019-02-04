/* 
 * File: CrazyRandomSword.cpp
 * Author: Kyle Lu kjl17@my.fsu.edu
 * 
 * Created on February 3rd, 2019
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    double damage;
    damage = hitPoints - (rand() % ((2/3) * armor - 1) + 2); // armor is ignored from RNG from 2 to a third of the armor

    if (damage < 0) {
        return 0;
    }
    return damage;
}
