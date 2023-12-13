#pragma once

#include "character.h"
#include "enemy.h"
#include "pet.h"
#include "player.h"
#include "dice.h"
#include "item.h"
#include "weapon.h"
#include "armor.h"
#include "potion.h"

class Combat {
public:
    Combat(std::vector<Character>& players);

    void startCombat();
    void rewardPlayer();

private:
    std::vector<Character>& players;
    Dice dice;
};

