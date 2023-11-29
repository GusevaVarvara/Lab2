#pragma once
#include <vector>
#include <string>

class TurnSystem {
public:
    TurnSystem(const std::vector<std::string>& players);

    const std::string& getCurrentPlayer() const;
    void nextTurn();

private:
    std::vector<std::string> playerList;
    std::vector<std::string>::const_iterator currentPlayer;
};



/*
#pragma once

#include <vector>

class TurnSystem {
private:
    std::vector<std::string> players;  // Список игроков
    int currentPlayerIndex;             // Индекс текущего игрока
    int roundCount;                     // Счетчик раундов

public:
    // Конструктор
    TurnSystem();

    // Метод для начала новой игры
    void startNewGame();

    // Метод для переключения хода на следующего игрока
    void nextTurn();

    // Метод для проверки условий завершения игры
    bool checkGameEnd();

    // Метод для отправки сообщений игрокам
    void sendMessage(const std::string& message);

    // Метод для уведомления игроков
    void notifyPlayers();
};
*/