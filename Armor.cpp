#include "armor.h"

std::vector<Armor> Armor::availableArmors;

Armor::Armor(const std::string& name, const std::string& description, int plusHealth, int plusDamage)
	: Item(name, description, plusHealth, plusDamage) {}

void Armor::addAvailableArmor(const Armor& armor) {
    availableArmors.push_back(armor);
}

void Armor::initializeAvailableArmors() {

    Armor flameplateArmor("FlameplateArmor", "������������ ��������� ������ - ���� ������ ������ �� ����� ������� ������, ����������� � ����. "
                           "��� ����� ����������, ������ ����� ����������� ����� ������� � �����, ��������� ���� ����������.", 5, 2);


    Armor shadowcloakMantle("ShadowcloakMantle", "���������� ������� ������ - ��� ������ ������ ��������� ��������� ������������ � ���� � ����������� ����� ��������� � "
                            "�������.", 9, 0);


    Armor bloodKissCloak("BloodKissCloak", "���� ��������� ������� - ���� ���� ������ �� ������� ���������, ������������ ������ �������. �� ������������� ������ �� ���������� "
                                     "���� � ����� ��������� ����� �����, ������������ ���������, �������������� ��� ��������.", 12, 0);

    availableArmors.push_back(flameplateArmor);
    availableArmors.push_back(shadowcloakMantle);
    availableArmors.push_back(bloodKissCloak);
}

const std::vector<Armor>& Armor::getAvailableArmors() {
    if (availableArmors.empty()) {
        initializeAvailableArmors();
    }
    return availableArmors;
}
Armor Armor::createArmor(const std::string& name) {
    const auto& armors = Armor::getAvailableArmors();

    for (const auto& armor : armors) {
        if (armor.getName() == name) {
            return armor;
        }
    }
    return Armor("?", "�������� �����������", 0, 0);
}