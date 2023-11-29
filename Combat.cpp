#include "combat.h"
#include <iostream>

Combat::Combat(std::vector<Character>& players, Enemy& enemy, Pet& pet)
    : players(players), enemy(enemy), pet(pet), turnSystem(players) {}

void Combat::startCombat() {
    int round = 1;
    while (true) {
        std::cout << "Round " << round << " begins!\n";

        for (const Character& player : players) {
            std::cout << "Player's turn:\n";
            int damage = dice.roll() * 5;
            enemy.takeDamage(damage);
            std::cout << "Player dealt " << damage << " damage to the enemy.\n";
        }

        std::cout << "Enemy's turn:\n";
        int enemyDamage = enemy.getFixedDamage();
        players[0].takeDamage(enemyDamage);
        std::cout << "Enemy dealt " << enemyDamage << " damage to the player.\n";

        std::cout << "Pet's turn:\n";
        int petDamage = pet.getFixedDamage();
        enemy.takeDamage(petDamage);
        std::cout << "Pet dealt " << petDamage << " damage to the enemy.\n";

        std::cout << "Player's health: " << players[0].getHealth() << "\n";
        std::cout << "Enemy's health: " << enemy.getHealth() << "\n";

        if (players[0].getHealth() <= 0) {
            std::cout << "Player is defeated. Game over!\n";
            break;
        }

        if (enemy.getHealth() <= 0) {
            std::cout << "Enemy is defeated. Victory!\n";
            break;
        }

        round++;
    }
}



/*
#include "Combat.h"
#include <iostream>

// ���������� ������� ������ Combat

Combat::Combat() : isBattleOver(false) {
    // �����������
}

void Combat::addCharacter(const std::string& character) {
    // ���������� ��������� � ������� ���
    participants.push_back(character);
}

void Combat::removeCharacter(const std::string& character) {
    // �������� ��������� �� �������� ���
    participants.erase(std::remove(participants.begin(), participants.end(), character), participants.end());
}

void Combat::startBattle() {
    // ������ ���
    turnSystem.startNewGame();
    isBattleOver = false;
    winner = "";
}

void Combat::endBattle(const std::string& battleWinner) {
    // ���������� ���
    isBattleOver = true;
    winner = battleWinner;
}

void Combat::nextTurn() {
    // ������������ ���� ����� �����������
    turnSystem.nextTurn();
}

void Combat::executeAction(const std::string& attacker, const std::string& target, const std::string& ability) {
    // ���������� �������� �� ����� ���
    std::string action = attacker + " attacks " + target + " with " + ability;
    addToBattleLog(action);
    // ����� �� ������ �������� ������ ���������� ��������
}

void Combat::addToBattleLog(const std::string& logEntry) {
    // ���������� ������� ��� � ������ ���
    battleLog.push_back(logEntry);
}
*/