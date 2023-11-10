#pragma once

#include <string>
#include "Race.h"
#include "Class.h"

class Character {
public:
    Character(const std::string& name, const Race& race, const Class& characterClass);
    const Race& getRace() const;
    const Class& getClass() const;

private:
    std::string name;
    Race race;
    Class characterClass;
};
