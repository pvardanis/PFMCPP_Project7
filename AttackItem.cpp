#include "AttackItem.h"
#include "Utility.h"
#include "Character.h"

void AttackItem::use(Character* character)
{
    std::cout << character->getName() << " uses his attack item!" << std::endl;
    useAttackItem(character, this);
}
