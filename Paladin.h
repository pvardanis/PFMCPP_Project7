#pragma once
#include "Character.h"
#include "Utility.h" FIXME you're not using anything in Utility in this file

struct Paladin : Character
{
    Paladin(std::string name_, int hp_, int armor_);
    virtual const std::string& getName() override;
    virtual std::string getStats() override;
private:
    const std::string name;
};
