#include "Dwarf.h"
#include <stdlib.h>  
#include <random>

Dwarf::Dwarf(std::string name_, int hp_, int armor_) : 
Character(hp_, armor_, 4),
name(name_)
{
    helpfulItems = makeHelpfulItems(rand() % 10);
    defensiveItems = makeDefensiveItems(rand() % 10);   
}

const std::string& Dwarf::getName() 
{
    return name;
}

std::string Dwarf::getStats() 
{
    return getCharacterStats(this);
}
