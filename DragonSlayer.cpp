#include "DragonSlayer.h"
#include "Dragon.h"
#include <cassert>
#include <stdlib.h>

DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_) : 
Character(hp_, armor_, 4),
name(name_)
{
    helpfulItems = makeHelpfulItems(rand() % 10);
    defensiveItems = makeDefensiveItems(rand() % 10);
}

const std::string& DragonSlayer::getName() 
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        attackItem.use(this);
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats() 
{
    return getCharacterStats(this);
}
