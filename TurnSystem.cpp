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
        // Если достигли конца списка игроков, вернемся к началу
        currentPlayer = playerList.begin();
    }
}





/*
#include "TurnSystem.h"
#include <algorithm>
#include <iostream>

// Реализация методов класса TurnSystem

TurnSystem::TurnSystem() : currentPlayerIndex(0), roundCount(0) {
    // Конструктор
}

void TurnSystem::startNewGame() {
    // Инициализация системы ходов
    roundCount = 0;
    // Здесь вы можете добавить логику для установки начальных значений и подготовки к первому раунду
}

void TurnSystem::nextTurn() {
    // Переключение хода на следующего игрока
    currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
    roundCount++;
}

bool TurnSystem::checkGameEnd() {
    // Здесь вы можете добавить логику проверки завершения игры
    // Например, проверить, достигнута ли какая-то цель или условие
    return false;
}

void TurnSystem::sendMessage(const std::string& message) {
    // Отправка сообщения текущему игроку
    std::cout << "Player " << players[currentPlayerIndex] << ": " << message << std::endl;
}

void TurnSystem::notifyPlayers() {
    // Уведомление игроков о текущем состоянии игры
    for (const auto& player : players) {
        std::cout << "Player " << player << ": It's your turn!" << std::endl;
    }
}
*/