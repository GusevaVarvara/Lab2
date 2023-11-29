#pragma once
#include <cstdlib>  // Для функции rand
#include <ctime>    // Для функции time

class Dice {
public:
    Dice();

    // Получить случайное число от 1 до 10
    int roll() const;

private:
    mutable bool seeded; // Флаг для отслеживания инициализации генератора случайных чисел
};


/*
#pragma once

#include <string>

class Dice {
private:
    int sides;       // Количество граней на кубике
    int modifier;    // Модификатор, добавляемый к результату броска

public:
    // Конструктор
    Dice(int numSides, int modifier);

    // Метод для броска кубика
    int roll() const;

    // Метод для получения описания кубика
    std::string getDescription() const;
};
*/