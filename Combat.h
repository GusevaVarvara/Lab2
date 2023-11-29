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
    std::vector<std::string> participants;  // Список персонажей, участвующих в текущем бою
    TurnSystem turnSystem;                  // Объект системы ходов для управления порядком ходов
    bool isBattleOver;                      // Флаг, указывающий на завершение боя
    std::string winner;                     // Победитель боя
    std::vector<std::string> battleLog;     // Журнал боя

public:
    // Конструктор
    Combat();

    // Метод для добавления персонажа в текущий бой
    void addCharacter(const std::string& character);

    // Метод для удаления персонажа из текущего боя
    void removeCharacter(const std::string& character);

    // Метод для начала боя
    void startBattle();

    // Метод для завершения боя
    void endBattle(const std::string& winner);

    // Метод для переключения хода между персонажами
    void nextTurn();

    // Метод для выполнения действия во время боя
    void executeAction(const std::string& attacker, const std::string& target, const std::string& ability);

    // Метод для добавления событий боя в журнал боя
    void addToBattleLog(const std::string& logEntry);
};
*/