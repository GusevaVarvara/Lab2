#include <iostream>
#include <locale>
#include "Race.h"
#include "Class.h"
#include "Character.h"

void displayAvailableOptions() {
    // ������� ���������� � ��������� �����
    std::cout << "��������� ����:\n";
    const std::vector<Race>& races = Race::getAvailableRaces();
    for (const Race& race : races) {
        std::cout << race.getName() << ": " << race.getDescription() << "\n";
    }

    // ������� ���������� � ��������� �������
    std::cout << "\n��������� ������:\n";
    const std::vector<Class>& classes = Class::getAvailableClasses();
    for (const Class& characterClass : classes) {
        std::cout << characterClass.getName() << ": " << characterClass.getDescription() << "\n";
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    // ���������������� ��������� ���� � ������
    Race::initializeAvailableRaces();
    Class::initializeAvailableClasses();

    // ������� ���������� � ��������� ������
    displayAvailableOptions();

    // ��������� ������ ������� ���� � �����
    std::string chosenRace, chosenClass;
    std::cout << "\n�������� ���� ��� ������ ���������: ";
    std::cin >> chosenRace;

    std::cout << "�������� ����� ��� ������ ���������: ";
    std::cin >> chosenClass;

    Race chosenRaceObj = Race::createRace(chosenRace);
    Class chosenClassObj = Class::createClass(chosenClass);

    Character playerCharacter("�����", chosenRaceObj, chosenClassObj);

    std::cout << "\n��� ��������:\n";
    std::cout << "����: " << playerCharacter.getRace().getName() << "\n";
    std::cout << "�����: " << playerCharacter.getClass().getName() << "\n";

    return 0;
}
