#include "potion.h"

std::vector<Potion> Potion::availablePotions;

Potion::Potion(const std::string& name, const std::string& description, int plusHealth, int plusDamage)
    : Item(name, description, plusHealth, plusDamage) {}

void Potion::addAvailablePotion(const Potion& potion) {
    availablePotions.push_back(potion);
}

void Potion::initializeAvailablePotions() {

    Potion demonicEssence("DemonicEssence", "ƒемоническа€ Ёссенци€ ∆гучего ќгн€ - это зелье придает силы огн€, усилива€ атаки и дела€ владельца "
                            "временно иммунным к огненным атакам.", 3, 5);


    Potion elvenEssence("ElvenEssence", "Ёльфийска€ Ёссенци€ Ћесной —корости - это зелье придает владельцу неверо€тную ловкость и скорость, что "
                          "улучшает маневренность в бою. ", 5, 5);


    Potion vampiricEssence("VampiricEssence", "¬ампирска€  ровава€ Ёссенци€ - это зелье позвол€ет владельцу впитывать часть здоровь€ противника "
                                      "при каждой атаке. ќно изготавливаетс€ из крови убитого вампира, придава€сь его мистической "
                                      "сущности.", 10, 2);

    availablePotions.push_back(demonicEssence);
    availablePotions.push_back(elvenEssence);
    availablePotions.push_back(vampiricEssence);
}

const std::vector<Potion>& Potion::getAvailablePotions() {
    if (availablePotions.empty()) {
        initializeAvailablePotions();
    }
    return availablePotions;
}
Potion Potion::createPotion(const std::string& name) {
    const auto& potions = Potion::getAvailablePotions();

    for (const auto& potion : potions) {
        if (potion.getName() == name) {
            return potion;
        }
    }
    return Potion("?", "ќписание отсутствует", 0, 0);
}