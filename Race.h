#pragma once

#include <string>
#include <vector>

class Race {
public:
    Race(const std::string& name, const std::string& description);

    void addAbility(const std::string& ability);
    void addAttribute(const std::string& attributeName, int value);
    void addBonus(const std::string& attributeToModify, int bonusValue);
    void addPenalty(const std::string& attributeToModify, int penaltyValue);
    void addAvailableRace(const Race& race);

    const std::string& getName() const;
    const std::string& getDescription() const;
    const std::vector<std::string>& getAbilities() const;
    const std::vector<std::pair<std::string, int>>& getAttributes() const;
    const std::vector<std::pair<std::string, int>>& getBonuses() const;
    const std::vector<std::pair<std::string, int>>& getPenalties() const;

    static void initializeAvailableRaces();
    static const std::vector<Race>& getAvailableRaces();
    static Race createRace(const std::string& raceName);


private:
    static std::vector<Race> availableRaces;
    std::string name;
    std::string description;
    std::vector<std::string> abilities;
    std::vector<std::pair<std::string, int>> attributes;
    std::vector<std::pair<std::string, int>> bonuses;
    std::vector<std::pair<std::string, int>> penalties;
};

