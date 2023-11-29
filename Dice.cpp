#include "dice.h"

Dice::Dice() : seeded(false) {}

int Dice::roll() const {
    // Инициализация генератора случайных чисел при первом вызове
    if (!seeded) {
        srand(static_cast<unsigned>(time(nullptr)));
        seeded = true;
    }

    // Генерация случайного числа от 1 до 10
    return (rand() % 10) + 1;
}


/*
#include "Dice.h"
#include <cstdlib>
#include <ctime>

// Реализация методов класса Dice

Dice::Dice(int numSides, int modifier) : sides(numSides), modifier(modifier) {
    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(nullptr)));
}

int Dice::roll() const {
    // Генерация случайного числа от 1 до количества граней
    int result = rand() % sides + 1;
    // Добавление модификатора
    return result + modifier;
}

std::string Dice::getDescription() const {
    return "Dice with " + std::to_string(sides) + " sides and modifier " + std::to_string(modifier);
}
*/