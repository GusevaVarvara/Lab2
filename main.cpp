#include <iostream>
#include <locale>
#include "Race.h"
#include "Class.h"
#include "Character.h"

void displayAvailableOptions() {
    std::cout << "Доступные расы:\n";
    const std::vector<Race>& races = Race::getAvailableRaces();
    for (const Race& race : races) {
        std::cout << race.getName() << ": " << race.getDescription() << "\n";
    }

    std::cout << "\nДоступные классы:\n";
    const std::vector<Class>& classes = Class::getAvailableClasses();
    for (const Class& characterClass : classes) {
        std::cout << characterClass.getName() << ": " << characterClass.getDescription() << "\n";
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    Race::initializeAvailableRaces();
    Class::initializeAvailableClasses();

    displayAvailableOptions();


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
