#include "TurnSystem.h"
#include <iostream>

TurnSystem::TurnSystem(const std::vector<std::string>& players)
    : playerList(players), currentPlayer(playerList.begin()) {}

const std::string& TurnSystem::getCurrentPlayer() const {
    return *currentPlayer;
}

void TurnSystem::nextTurn() {
    ++currentPlayer;
    if (currentPlayer == playerList.end()) {
        currentPlayer = playerList.begin();
    }
}





