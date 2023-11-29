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
        // ���� �������� ����� ������ �������, �������� � ������
        currentPlayer = playerList.begin();
    }
}





/*
#include "TurnSystem.h"
#include <algorithm>
#include <iostream>

// ���������� ������� ������ TurnSystem

TurnSystem::TurnSystem() : currentPlayerIndex(0), roundCount(0) {
    // �����������
}

void TurnSystem::startNewGame() {
    // ������������� ������� �����
    roundCount = 0;
    // ����� �� ������ �������� ������ ��� ��������� ��������� �������� � ���������� � ������� ������
}

void TurnSystem::nextTurn() {
    // ������������ ���� �� ���������� ������
    currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
    roundCount++;
}

bool TurnSystem::checkGameEnd() {
    // ����� �� ������ �������� ������ �������� ���������� ����
    // ��������, ���������, ���������� �� �����-�� ���� ��� �������
    return false;
}

void TurnSystem::sendMessage(const std::string& message) {
    // �������� ��������� �������� ������
    std::cout << "Player " << players[currentPlayerIndex] << ": " << message << std::endl;
}

void TurnSystem::notifyPlayers() {
    // ����������� ������� � ������� ��������� ����
    for (const auto& player : players) {
        std::cout << "Player " << player << ": It's your turn!" << std::endl;
    }
}
*/