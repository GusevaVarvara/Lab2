#pragma once

#include <iostream>
#include <string>

class Character {
public:
    Character(const std::string& name, int initialHealth = 100);

    virtual void displayInfo() const;

    int getHealth() const;
    void setHealth(int newHealth);

private:
    std::string name;
    int health;
};
