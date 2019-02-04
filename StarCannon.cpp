/* 
 * File: StarCannon.cpp
 * Author: Kyle Lu kjl17@my.fsu.edu
 * 
 * Created on February 3rd, 2019
 */

#include "StarCannon.h"
#include <ctime>

double StarCannon::hit(double armor) {
	srand(time(0));
    double damage = hitpoints - (armor * .60 + (rand() % 10 + 1)); // ignores 40% of armor + RNG from 1-10
    if (damage < 0) {
        return 0;
    }
    return damage;
}
