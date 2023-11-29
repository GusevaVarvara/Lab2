#include "Pet.h"
#include <iostream>

std::vector<Pet> Pet::availablePets;

Pet::Pet(const std::string& name, const std::string& petname, const std::string& description, int fixedDamage)
    : Character(name), petname(petname), description(description), fixedDamage(fixedDamage) {}

void Pet::addAvailablePets(const Pet& pet) {
    availablePets.push_back(pet);
}

void Pet::initializeAvailablePets() {

    Pet pseudodragon("�������", "Pseudodragon", " ������������� - ��� ��������� ��������, ������� �� ��������, � �������������� ������, �������� �������������� �������� "
                               "� ������� �������. �� �������� ��������� � ������� ������� ����������.�������� �� ���� �������� ���������, "
                               "��� ������������ ��������� � ����� ������ ����������� ���������� ������������.", 5);


    Pet BlinkDog("�������", "Blink-Dog", " ��������� ������ - ��� ���������������, ���������������� ������ � ������� ����-����� �������. � ��� ���� ����������� "
                           "����������������� �� �������� ����������, ��� ������ �� ��������� ���������� � ��������. �������� ����� ������������, �� ����� "
                           "�������� ������������ ��� �����������.", 5);


    Pet FeyPanther("�������", "Fey-Panther", "������� ������� - ��� �����������, ���������� ������� ����� � �����, ����������� �������. ��� �������� �� �������� "
                                   "���������� ���������, � �������� ����������, ������������ ����� �������, �������������� �����. ������ � ����������, �� "
                                   "����� �������� ������������ ��� ���, ��� ������������ �� ��������� ��� ���� �����.", 5);

    availablePets.push_back(pseudodragon);
    availablePets.push_back(BlinkDog);
    availablePets.push_back(FeyPanther);
}

const std::vector<Pet>& Pet::getAvailablePets() {
    if (availablePets.empty()) {
        initializeAvailablePets();
    }
    return availablePets;
}

const std::string& Pet::getName() const {
    return petname;
}

const std::string& Pet::getDescription() const {
    return description;
}

int Pet::getFixedDamage() const {
    return fixedDamage;
}

Pet Pet::createPet(const std::string& petName) {
    const auto& pets = Pet::getAvailablePets();

    for (const auto& pet : pets) {
        if (pet.getName() == petName) {
            return pet;
        }
    }
    return Pet("?", "����������� ������� ", "�������� �����������", 0);
}
