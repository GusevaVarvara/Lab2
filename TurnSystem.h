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
    std::vector<std::string> players;  // ������ �������
    int currentPlayerIndex;             // ������ �������� ������
    int roundCount;                     // ������� �������

public:
    // �����������
    TurnSystem();

    // ����� ��� ������ ����� ����
    void startNewGame();

    // ����� ��� ������������ ���� �� ���������� ������
    void nextTurn();

    // ����� ��� �������� ������� ���������� ����
    bool checkGameEnd();

    // ����� ��� �������� ��������� �������
    void sendMessage(const std::string& message);

    // ����� ��� ����������� �������
    void notifyPlayers();
};
*/