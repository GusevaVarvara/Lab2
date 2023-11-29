#include "enemy.h"

std::vector<Enemy> Enemy::availableEnemies;

Enemy::Enemy(const std::string& name, const std::string& enemyname, const std::string& description, int initialEnemyHealth, int fixedDamage)
    : Character(name), enemyname(enemyname), description(description), enemyHealth(initialEnemyHealth), fixedDamage(fixedDamage) {}

void Enemy::addAvailableEnemies(const Enemy& enemy) {
    availableEnemies.push_back(enemy);
}

void Enemy::initializeAvailableEnemies() {

    Enemy arcadios("����","Arcadios", "�������������� ����� � ������ ����� � ������ �����. �������� �������� ������� � ���������, "
        "�������� �� ����� ���� ���������� � ���������� ���.", 50, 15);


    Enemy serafina("����","Serafina", " ���������� ��������, �������� ������ ���. ���������� ���� ���������� ������� � �������� ��� �������, "
                                "����� �������������� �������� � ����������, ��������� �� ������ ������ ����������.", 100, 10);


    Enemy malgrim("����","Malgrim", "������� ������ � �������� ������, ������������� ������ ������. ��� ����� ����� � ������� "
                                        "���������� ��� ������ ������ ��� �������� �����������.", 150, 10);

    availableEnemies.push_back(arcadios);
    availableEnemies.push_back(serafina);
    availableEnemies.push_back(malgrim);
}

const std::vector<Enemy>& Enemy::getAvailableEnemies() {
    if (availableEnemies.empty()) {
        initializeAvailableEnemies();
    }
    return availableEnemies;
}

const std::string& Enemy::getName() const {
    return enemyname;
}

const std::string& Enemy::getDescription() const {
    return description;
}

int Enemy::getEnemyHealth() const {
    return enemyHealth;
}

void Enemy::takeDamage(int damage) {
    enemyHealth -= damage;
    if (enemyHealth < 0) {
        enemyHealth = 0;
    }
}

void Enemy::setEnemyHealth(int newEnemyHealth) {
    enemyHealth = newEnemyHealth;
}

int Enemy::getFixedDamage() const {
    return fixedDamage;
}

Enemy Enemy::createEnemy(const std::string& enemyName) {
    const auto& enemies = Enemy::getAvailableEnemies();

    for (const auto& enemy : enemies) {
        if (enemy.getName() == enemyName) {
            return enemy;
        }
    }
    return Enemy("?","����������� ����", "�������� �����������", 0, 0);
}

