/* 
 * File: SimpleHammer.cpp
 * Author: Kyle Lu kjl17@my.fsu.edu
 * 
 * Created on February 3rd, 2019
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if(armor < 30){
    	damage = hitPoints - (armor * 0); // armor is totally ignored
    }
    damage = hitPoints - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
