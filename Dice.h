#pragma once
#include <cstdlib>  // ��� ������� rand
#include <ctime>    // ��� ������� time

class Dice {
public:
    Dice();

    // �������� ��������� ����� �� 1 �� 10
    int roll() const;

private:
    mutable bool seeded; // ���� ��� ������������ ������������� ���������� ��������� �����
};


/*
#pragma once

#include <string>

class Dice {
private:
    int sides;       // ���������� ������ �� ������
    int modifier;    // �����������, ����������� � ���������� ������

public:
    // �����������
    Dice(int numSides, int modifier);

    // ����� ��� ������ ������
    int roll() const;

    // ����� ��� ��������� �������� ������
    std::string getDescription() const;
};
*/