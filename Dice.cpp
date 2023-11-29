#include "dice.h"

Dice::Dice() : seeded(false) {}

int Dice::roll() const {
    // ������������� ���������� ��������� ����� ��� ������ ������
    if (!seeded) {
        srand(static_cast<unsigned>(time(nullptr)));
        seeded = true;
    }

    // ��������� ���������� ����� �� 1 �� 10
    return (rand() % 10) + 1;
}


/*
#include "Dice.h"
#include <cstdlib>
#include <ctime>

// ���������� ������� ������ Dice

Dice::Dice(int numSides, int modifier) : sides(numSides), modifier(modifier) {
    // ������������� ���������� ��������� �����
    srand(static_cast<unsigned int>(time(nullptr)));
}

int Dice::roll() const {
    // ��������� ���������� ����� �� 1 �� ���������� ������
    int result = rand() % sides + 1;
    // ���������� ������������
    return result + modifier;
}

std::string Dice::getDescription() const {
    return "Dice with " + std::to_string(sides) + " sides and modifier " + std::to_string(modifier);
}
*/