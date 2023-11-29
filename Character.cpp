#include "character.h"

Character::Character(const std::string& name, int initialHealth)
    : name(name), health(initialHealth) {}

void Character::displayInfo() const {
    std::cout << "Character Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

void Character::heal(int amount) {
    health += amount;
}

int Character::getHealth() const {
    return health;
}

void Character::setHealth(int newHealth) {
    health = newHealth;
}
