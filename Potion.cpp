#include "potion.h"

std::vector<Potion> Potion::availablePotions;

Potion::Potion(const std::string& name, const std::string& description, int plusHealth, int plusDamage)
    : Item(name, description, plusHealth, plusDamage) {}

void Potion::addAvailablePotion(const Potion& potion) {
    availablePotions.push_back(potion);
}

void Potion::initializeAvailablePotions() {

    Potion demonicEssence("DemonicEssence", "������������ �������� ������� ���� - ��� ����� ������� ���� ����, �������� ����� � ����� ��������� "
                            "�������� �������� � �������� ������.", 3, 5);


    Potion elvenEssence("ElvenEssence", "���������� �������� ������ �������� - ��� ����� ������� ��������� ����������� �������� � ��������, ��� "
                          "�������� ������������� � ���. ", 5, 5);


    Potion vampiricEssence("VampiricEssence", "���������� �������� �������� - ��� ����� ��������� ��������� ��������� ����� �������� ���������� "
                                      "��� ������ �����. ��� ��������������� �� ����� ������� �������, ���������� ��� ����������� "
                                      "��������.", 10, 2);

    availablePotions.push_back(demonicEssence);
    availablePotions.push_back(elvenEssence);
    availablePotions.push_back(vampiricEssence);
}

const std::vector<Potion>& Potion::getAvailablePotions() {
    if (availablePotions.empty()) {
        initializeAvailablePotions();
    }
    return availablePotions;
}
Potion Potion::createPotion(const std::string& name) {
    const auto& potions = Potion::getAvailablePotions();

    for (const auto& potion : potions) {
        if (potion.getName() == name) {
            return potion;
        }
    }
    return Potion("?", "�������� �����������", 0, 0);
}