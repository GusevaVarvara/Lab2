#include <iostream>
#include <locale>
#include "Race.h"
#include "Class.h"
#include "Character.h"

void displayAvailableOptions() {
    // Вывести информацию о доступных расах
    std::cout << "Доступные расы:\n";
    const std::vector<Race>& races = Race::getAvailableRaces();
    for (const Race& race : races) {
        std::cout << race.getName() << ": " << race.getDescription() << "\n";
    }

    // Вывести информацию о доступных классах
    std::cout << "\nДоступные классы:\n";
    const std::vector<Class>& classes = Class::getAvailableClasses();
    for (const Class& characterClass : classes) {
        std::cout << characterClass.getName() << ": " << characterClass.getDescription() << "\n";
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    // Инициализировать доступные расы и классы
    Race::initializeAvailableRaces();
    Class::initializeAvailableClasses();

    // Вывести информацию о доступных опциях
    displayAvailableOptions();

    // Позволить игроку выбрать расу и класс
    std::string chosenRace, chosenClass;
    std::cout << "\nВыберите расу для вашего персонажа: ";
    std::cin >> chosenRace;

    std::cout << "Выберите класс для вашего персонажа: ";
    std::cin >> chosenClass;

    Race chosenRaceObj = Race::createRace(chosenRace);
    Class chosenClassObj = Class::createClass(chosenClass);

    Character playerCharacter("Игрок", chosenRaceObj, chosenClassObj);

    std::cout << "\nВаш персонаж:\n";
    std::cout << "Раса: " << playerCharacter.getRace().getName() << "\n";
    std::cout << "Класс: " << playerCharacter.getClass().getName() << "\n";

    return 0;
}
