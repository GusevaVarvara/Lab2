#pragma once

#include "character.h"
#include <vector>

class Enemy : public Character {
public:
    Enemy(const std::string& name, const std::string& enemyname, const std::string& description, int initialEnemyHealth, int fixedDamage);

    void addAvailableEnemies(const Enemy& race);

    virtual void takeDamage(int damage);
    const std::string& getName() const;
    const std::string& getDescription() const;
    static const std::vector<Enemy>& getAvailableEnemies();
    static void initializeAvailableEnemies();
    static Enemy createEnemy(const std::string& enemyName);

    int getEnemyHealth() const;
    int getFixedDamage() const;
    void setEnemyHealth(int newEnemyHealth);

private:
    int fixedDamage;
    int enemyHealth;
    std::string description;
    std::string name;
    std::string enemyname;
    static std::vector<Enemy> availableEnemies;
};

