#include "Class.h"

std::vector<Class> Class::availableClasses;

Class::Class(const std::string& name, const std::string& description)
    : name(name), description(description) {}

void Class::addAbility(const std::string& ability) {
    abilities.push_back(ability);
}

void Class::addAttribute(const std::string& attributeName, int value) {
    attributes.emplace_back(attributeName, value);
}

void Class::addBonus(const std::string& attributeToModify, int bonusValue) {
    bonuses.emplace_back(attributeToModify, bonusValue);
}

void Class::addPenalty(const std::string& attributeToModify, int penaltyValue) {
    penalties.emplace_back(attributeToModify, penaltyValue);
}

void Class::addAvailableClasses(const Class& characterClass) {
    availableClasses.push_back(characterClass);
}

void Class::initializeAvailableClasses() {

    Class warrior("Warrior", "����� - ������� � ������� ���, ���������� ����� � ��������,"
        "������������ ��� ������� ��������. ��� �������� �������� "
        "������, �������� � ��������� � ������� � ������, � ����� ������� "
        "������ ������ � ������� ����������.");
    warrior.addAttribute("����", 15);
    warrior.addAttribute("��������", 10);
    warrior.addAttribute("���������", 8);
    warrior.addAttribute("������������", 12);
    warrior.addAbility("������ ����");
    warrior.addAbility("����������");

    Class wizard("Wizard", "���� - ���������� ������ � ���������� � ����������. �� ���� ���������� "
        "�� ��������� ��������� ����� � ����������� ������������ ���������� ��� "
        "����������� �����������. �������� ����� ������, ���� ����� �������� �������������� "
        "�������, �� ������� ���� �� ��������� ���������.");
    wizard.addAttribute("����", 8);
    wizard.addAttribute("��������", 10);
    wizard.addAttribute("���������", 15);
    wizard.addAttribute("��������", 12);
    wizard.addAttribute("������������", 10);
    wizard.addAttribute("�������", 10);
    wizard.addAbility("����� ����");
    wizard.addAbility("������������");

    Class rogue("Rogue", "���� - ������ � ������ ���������, ������������������ �� ����������, ��������� � ���������� "
        "������� ���������. ��� ����� ���� ������� ��������� ��� ��������� �������. ���� �������� �������� "
        "� ������, ���������� � ��������� � ������ �������.");
    rogue.addAttribute("����", 12);
    rogue.addAttribute("��������", 15);
    rogue.addAttribute("���������", 10);
    rogue.addAbility("����������");
    rogue.addAbility("����� ������");

    Class cleric("Cleric", "����� - ��������� �������, ���������� ��������� ������. ��� ����� ���� ��������, ����������� ���� "
        "��� ������������ ���������� �����. ����� ����� ������ ���������, �������� ������������� ��� ���������, "
        "� ���� �������� � �������. � ��� ���� ������ � ������������ ����������� � ������������� ���������.");
    cleric.addAttribute("����", 10);
    cleric.addAttribute("��������", 10);
    cleric.addAttribute("���������", 12);
    cleric.addAbility("���������");
    cleric.addAbility("������ ������������ �����");

    Class druid("Druid", "������ - ��������� �������, ���������� ������, ������� ������� � ����������, ��������� � ��������.��� "
        "����� ������ �����, �������� ���� ������� � ������ ���������. ������ �������� ������������ ������� � "
        "���������, ������� ����� ������� � ����� ������������ ����������, ��������� � ��������.��� ����� ����� "
        "���� ����������� ���������� �����.");
    druid.addAttribute("����", 10);
    druid.addAttribute("��������", 12);
    druid.addAttribute("���������", 10);
    druid.addAbility("����� �����");
    druid.addAbility("������������� ��������� �����");

    availableClasses.push_back(warrior);
    availableClasses.push_back(wizard);
    availableClasses.push_back(rogue);
    availableClasses.push_back(cleric);
    availableClasses.push_back(druid);
}


const std::string& Class::getName() const {
    return name;
}

const std::string& Class::getDescription() const {
    return description;
}

const std::vector<std::string>& Class::getAbilities() const {
    return abilities;
}

const std::vector<std::pair<std::string, int>>& Class::getAttributes() const {
    return attributes;
}

const std::vector<std::pair<std::string, int>>& Class::getBonuses() const {
    return bonuses;
}

const std::vector<std::pair<std::string, int>>& Class::getPenalties() const {
    return penalties;
}

const std::vector<Class>& Class::getAvailableClasses() {
    return availableClasses;
}

Class Class::createClass(const std::string& className) {
    for (const Class& characterClass : availableClasses) {
        if (characterClass.getName() == className) {
            return characterClass;
        }
    }
    return Class("����������� �����", "�������� �����������");
}
