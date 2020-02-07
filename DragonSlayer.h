#pragma once
#include "Character.h"
#include "Utility.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string name_, int hp_, int armor_);
    void attack(Character& other) override;
    virtual const std::string& getName() override;
    virtual std::string getStats() override;
private:
    const std::string name;
    AttackItem attackItem;
};
