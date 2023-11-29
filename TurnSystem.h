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


