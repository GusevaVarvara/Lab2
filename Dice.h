#pragma once
#include <cstdlib>  
#include <ctime>    

class Dice {
public:
    Dice();
    int roll() const;

private:
    mutable bool seeded; 
};


