#include "Paladin.h"
#include <stdlib.h>  
#include <random>

Paladin::Paladin(std::string name_, int hp_, int armor_) : 
Character(hp_, armor_, 10),
name(name_)
{
    helpfulItems = makeHelpfulItems(rand() % 10);
    defensiveItems = makeDefensiveItems(rand() % 10);
}

const std::string& Paladin::getName() 
{
    return name;
}

std::string Paladin::getStats() 
{
    return getCharacterStats(this);
}
g