#include "HelpfulItem.h"
#include "Utility.h"
#include "Character.h"

void HelpfulItem::use(Character* character)
{
    std::cout << character->getName() << " uses his helpful item!" << std::endl;
    useHelpfulItem(character, this);
}
