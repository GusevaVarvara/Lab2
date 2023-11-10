#include "Character.h"

Character::Character(const std::string& name, const Race& race, const Class& characterClass)
    : name(name), race(race), characterClass(characterClass) {
}

const Race& Character::getRace() const {
    return race;
}

const Class& Character::getClass() const {
    return characterClass;
}
