#pragma once

#include "character.h"
#include "enemy.h"
#include "pet.h"
#include "dice.h"
#include "turnsystem.h"

class Combat {
public:
    Combat(std::vector<Character>& players, Enemy& enemy, Pet& pet);

    void startCombat();

private:
    std::vector<Character>& players;
    Enemy& enemy;
    Pet& pet;
    TurnSystem turnSystem;
    Dice dice;
};

