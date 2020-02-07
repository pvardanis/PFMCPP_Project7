#pragma once
#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string name_, int hp_, int armor_);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};

