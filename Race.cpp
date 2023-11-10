#include "Race.h"

std::vector<Race> Race::availableRaces;

Race::Race(const std::string& name, const std::string& description)
    : name(name), description(description) {}

void Race::addAbility(const std::string& ability) {
    abilities.push_back(ability);
}

void Race::addAttribute(const std::string& attributeName, int value) {
    attributes.emplace_back(attributeName, value);
}

void Race::addBonus(const std::string& attributeToModify, int bonusValue) {
    bonuses.emplace_back(attributeToModify, bonusValue);
}

void Race::addPenalty(const std::string& attributeToModify, int penaltyValue) {
    penalties.emplace_back(attributeToModify, penaltyValue);
}

void Race::addAvailableRace(const Race& race) {
    availableRaces.push_back(race);
}

void Race::initializeAvailableRaces() {

    Race humans("Humans", "���� - ����� ������������� � ���������� ����,"
        "�������� ���������� ������� ���������, ����������� ������������� � �������������"
        "� ����������� �� ������ �������������. ���� �������� ����� ��������, �����������"
        "� ���������� �������������� �����, � ����� ������������ ������ ��������� � ����������������� � ������ ���������."
        "��� ����� �������� ����� ������ � ������������� ����, �� ������ �� �����, �� ������� �� �����.");
    humans.addAttribute("����", 10);
    humans.addAttribute("��������", 10);
    humans.addAttribute("���������", 10);
    humans.addAttribute("��������", 10);
    humans.addAttribute("�������", 10);
    humans.addAttribute("������������", 10);
    humans.addAbility("���������������");
    humans.addAbility("�������������� ����� ������");

    Race elves("Elves", "����� - ������� � ���������� ��������, ����� � �������� � �������� � �������� ���������� �����������."
        "����� ��������� ������� � ���������, ����� � ������; �������� ����� �����������, ��������"
        "� ���������� ����������, � ����� �������� ��������� - ���������� ������������ ������ ��������� � �������."
        "��� ����� �������� ������ � �������� �� ���� � �������� ������� ������������� �"
        "����������� ������� � ���������� ��������.");
    elves.addAttribute("����", 10);
    elves.addAttribute("��������", 15);
    elves.addAttribute("���������", 12);
    elves.addAttribute("��������", 14);
    elves.addAttribute("�������", 12);
    elves.addAttribute("������������", 12);
    elves.addBonus("��������", 2);
    elves.addPenalty("������������", 2);
    elves.addAbility("������ �������");
    elves.addAbility("������������ � ���");

    Race dragonborns("Dragonborns", "���������������� - ������������ ��������, ���������� ���������� ������� �����, ������������ �� ������� - ��������:"
        "����� �� ����, ����� ����� ������ � ���� �� ������. �� ���������� ����, ������������ � �����������"
        "������ �� ��������� ������� � �������. ���������������� ����� ��������� ������ �� ����� ��������� ����,"
        "����� ��� ������� �������, ������� ��������� �� ��������� �������������� ������������ �����. ��� ��������"
        "�������� ����� � ��������, � ����� ����� ��������� �����������.");
    dragonborns.addAttribute("����", 12);
    dragonborns.addAttribute("��������", 8);
    dragonborns.addAttribute("���������", 10);
    dragonborns.addAttribute("��������", 10);
    dragonborns.addAttribute("�������", 12);
    dragonborns.addAttribute("������������", 12);
    dragonborns.addBonus("����", 2);
    dragonborns.addBonus("�������", 1);
    dragonborns.addAbility("����� �������");
    dragonborns.addAbility("������������� �������");

    Race dwarves("Dwarves", "������ - ������� � ���������� ����, ��������� ������ ������� ��������, ������ ������ � ������� ��������� ���������� ������� ��"
        "������� � �����. ��� ����� � ����������� � ������ ���������, ����� ������� ������� � ��������. ������ ��������"
        "����� ������������� � ����, �������� � ���������� ��������, � ����� ����������� � ��� � ������ ����. � ��� ������ ��������"
        "����� � �������� �� ���� ������� ��������. ");
    dwarves.addAttribute("����", 10);
    dwarves.addAttribute("��������", 8);
    dwarves.addAttribute("���������", 10);
    dwarves.addAttribute("��������", 12);
    dwarves.addAttribute("�������", 8);
    dwarves.addAttribute("������������", 12);
    dwarves.addBonus("������������", 2);
    dwarves.addPenalty("��������", 2);
    dwarves.addAbility("������������� ���");
    dwarves.addAbility("�������� ��������");

    Race orcs("Orcs", "���� - ������� � ������������ ����, ��������� ����� �������������� � ���������������. ���� ������ ����� ������� ����, ���� ��"
        "������-������� �� �����-����������, � ������ ����. ��� ����� � ��������, ����������� �������, � ��������, ��������� �"
        "����������� ����� �����. ���� ����� ������������ ��� �������� ���� � ��������������, �� ��� ����� ����� ����� �����������"
        "������� ����� � �������� � ����� ��������.");
    orcs.addAttribute("����", 18);
    orcs.addAttribute("��������", 10);
    orcs.addAttribute("���������", 8);
    orcs.addAttribute("��������", 10);
    orcs.addAttribute("�������", 6);
    orcs.addAttribute("������������", 16);
    orcs.addBonus("����", 4);
    orcs.addPenalty("���������", 2);
    orcs.addAbility("������");
    orcs.addAbility("������������� ������");



    availableRaces.push_back(humans);
    availableRaces.push_back(elves);
    availableRaces.push_back(dragonborns);
    availableRaces.push_back(dwarves);
    availableRaces.push_back(orcs);
}

const std::vector<Race>& Race::getAvailableRaces() {
    if (availableRaces.empty()) {
        initializeAvailableRaces();
    }
    return availableRaces;
}

const std::string& Race::getName() const {
    return name;
}

const std::string& Race::getDescription() const {
    return description;
}

const std::vector<std::string>& Race::getAbilities() const {
    return abilities;
}

const std::vector<std::pair<std::string, int>>& Race::getAttributes() const {
    return attributes;
}

const std::vector<std::pair<std::string, int>>& Race::getBonuses() const {
    return bonuses;
}

const std::vector<std::pair<std::string, int>>& Race::getPenalties() const {
    return penalties;
}

Race Race::createRace(const std::string& raceName) {
    const auto& races = Race::getAvailableRaces();

    for (const auto& race : races) {
        if (race.getName() == raceName) {
            return race;
        }
    }
    return Race("����������� ����", "�������� �����������");
}

