#pragma once
#include "Character.h"
#include "Utility.h" FIXME you're not using anything from Utilty in this file.
#include <stdlib.h>  FIXME you're not using anything from stdlib in this file. include <string> instead

struct Dwarf : Character
{
    Dwarf (const std::string name_, int hp_, int armor_);
    virtual const std::string& getName() override; FIXME drawf is not a base class whose functions should be made virtual
    virtual std::string getStats() override;
private:
    const std::string name;
};
