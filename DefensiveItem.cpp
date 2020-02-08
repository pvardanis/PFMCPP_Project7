#include "DefensiveItem.h"
#include "Utility.h"
#include "Character.h"

void DefensiveItem::use(Character* character)
{
    std::cout << character->getName() << " uses his defensive item!" << std::endl;
    useDefensiveItem(character, *this);
}
