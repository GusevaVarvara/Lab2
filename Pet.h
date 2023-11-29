#pragma once
#include "character.h"
#include <string>
#include <vector>

class Pet : public Character {
public:
    Pet(const std::string& name, const std::string& petname, const std::string& description, int fixedDamage);

    void addAvailablePets(const Pet& pet);

    const std::string& getName() const;
    const std::string& getDescription() const;
    static const std::vector<Pet>& getAvailablePets();
    static void initializeAvailablePets();
    static Pet createPet(const std::string& petName);

    int getFixedDamage() const;
private:
    int fixedDamage;
    std::string description;
    std::string name;
    std::string petname;
    static std::vector<Pet> availablePets;
};
