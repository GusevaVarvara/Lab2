#include "enemy.h"

std::vector<Enemy> Enemy::availableEnemies;

Enemy::Enemy(const std::string& name, const std::string& enemyname, const std::string& description, int initialEnemyHealth, int fixedDamage)
    : Character(name), enemyname(enemyname), description(description), enemyHealth(initialEnemyHealth), fixedDamage(fixedDamage) {}

void Enemy::addAvailableEnemies(const Enemy& enemy) {
    availableEnemies.push_back(enemy);
}

void Enemy::initializeAvailableEnemies() {

    Enemy arcadios("Враг","Arcadios", "Могущественный демон с черной душой и армией мрака. Аркадиус питается страхом и отчаянием, "
        "оставляя за собой след разрушений и исчезающих душ.", 50, 15);


    Enemy serafina("Враг","Serafina", " Обманчивая эльфийка, союзница темных сил. Использует свою мастерство иллюзий и контроля над разумом, "
                                "чтобы манипулировать природой и созданиями, превращая их против группы персонажей.", 100, 10);


    Enemy malgrim("Враг","Malgrim", "Древний вампир с мрачными силами, возглавляющий легион нежити. Его жажда крови и желание "
                                        "господства над живыми делают его страшным противником.", 150, 10);

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
    return Enemy("?","Недоступный враг", "Описание отсутствует", 0, 0);
}
