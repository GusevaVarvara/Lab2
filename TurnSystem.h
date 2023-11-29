#pragma once

#include <vector>
#include "character.h"

class TurnSystem {
public:
    TurnSystem(const std::vector<Character>& players);

    const Character& getCurrentPlayer() const;
    void nextTurn();

private:
    const std::vector<Character>& players;
    size_t currentPlayerIndex;
};




