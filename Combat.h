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







/*
#pragma once

#include "TurnSystem.h"
#include <vector>
#include <string>

class Combat {
private:
    std::vector<std::string> participants;  // ������ ����������, ����������� � ������� ���
    TurnSystem turnSystem;                  // ������ ������� ����� ��� ���������� �������� �����
    bool isBattleOver;                      // ����, ����������� �� ���������� ���
    std::string winner;                     // ���������� ���
    std::vector<std::string> battleLog;     // ������ ���

public:
    // �����������
    Combat();

    // ����� ��� ���������� ��������� � ������� ���
    void addCharacter(const std::string& character);

    // ����� ��� �������� ��������� �� �������� ���
    void removeCharacter(const std::string& character);

    // ����� ��� ������ ���
    void startBattle();

    // ����� ��� ���������� ���
    void endBattle(const std::string& winner);

    // ����� ��� ������������ ���� ����� �����������
    void nextTurn();

    // ����� ��� ���������� �������� �� ����� ���
    void executeAction(const std::string& attacker, const std::string& target, const std::string& ability);

    // ����� ��� ���������� ������� ��� � ������ ���
    void addToBattleLog(const std::string& logEntry);
};
*/