#include "weapon.h"

std::vector<Weapon> Weapon::availableWeapons;

Weapon::Weapon(const std::string& name, const std::string& description, int plusHealth, int plusDamage)
    : Item(name, description, plusHealth, plusDamage) {}

void Weapon::addAvailableWeapon(const Weapon& weapon) {
    availableWeapons.push_back(weapon);
}

void Weapon::initializeAvailableWeapons() {

    Weapon chaosblade("ChaosBlade", "������������ ������ ����� - ��� ������ �������� ��������� ������, ���������������� � ������ �������. "
                            "������ ���� ���� ������� �������� ���������� ����, � ��� ������ ������ �������� ���������� ���� ����� "
                            "����� ������� �������.", 0, 7);


    Weapon moonshadowBow("MoonshadowBow", "���������� ������ ��� - ���� ��� ��������� ���������� ����������, ��������������� ������ � �������� "
                                          "����� ������.������, ���������� �� ���� ����, �������� ���������� ��������, �������� ������� �� "
                                          "����� � ��������� �������� ������ ����� � ��������.", 0, 9);


    Weapon bloodhoundDagger("BloodhoundDagger", "�������� ������ ���������� - ������ ����� ���� ����� ������, �������� �������� �� �������� ������ ����� "
                                      "�������. ��� ��������� �����, ������ ��������� ����� ��� ��������� �������, ��������� � ���������.", 2, 10);

    availableWeapons.push_back(chaosblade);
    availableWeapons.push_back(moonshadowBow);
    availableWeapons.push_back(bloodhoundDagger);
}

const std::vector<Weapon>& Weapon::getAvailableWeapons() {
    if (availableWeapons.empty()) {
        initializeAvailableWeapons();
    }
    return availableWeapons;
}
Weapon Weapon::createWeapon(const std::string& name) {
    const auto& weapons = Weapon::getAvailableWeapons();

    for (const auto& weapon : weapons) {
        if (weapon.getName() == name) {
            return weapon;
        }
    }
    return Weapon("?", "�������� �����������", 0, 0);
}