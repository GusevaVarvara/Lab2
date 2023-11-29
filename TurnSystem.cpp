#include "turnsystem.h"

TurnSystem::TurnSystem(const std::vector<Character>& players)
    : players(players), currentPlayerIndex(0) {}

const Character& TurnSystem::getCurrentPlayer() const {
    return players[currentPlayerIndex];
}

void TurnSystem::nextTurn() {
    currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
}




