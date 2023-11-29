#include "Pet.h"
#include <iostream>

std::vector<Pet> Pet::availablePets;

Pet::Pet(const std::string& name, const std::string& petname, const std::string& description, int fixedDamage)
    : Character(name), petname(petname), description(description), fixedDamage(fixedDamage) {}

void Pet::addAvailablePets(const Pet& pet) {
    availablePets.push_back(pet);
}

void Pet::initializeAvailablePets() {

    Pet pseudodragon("ѕитомец", "Pseudodragon", " ѕсевдодраконы - это небольшие существа, похожие на драконов, с переливающейс€ чешуей, летучими мышцеподобными крыль€ми "
                               "и длинным хвостом. »х отличает игривость и высокий уровень интеллекта.Ќесмотр€ на свою драконью внешность, "
                               "они относительно небольшие и часто служат магическими спутниками заклинателей.", 5);


    Pet BlinkDog("ѕитомец", "Blink-Dog", " ћерцающие собаки - это среднеразмерные, интеллектуальные собаки с гладкой сине-серой шерстью. ” них есть способность "
                           "телепортироватьс€ на короткие рассто€ни€, что делает их отличными охотниками и стражами. »звестны своей преданностью, их часто "
                           "выбирают компаньонами дл€ приключений.", 5);


    Pet FeyPanther("ѕитомец", "Fey-Panther", "‘ейские пантеры - это мистические, магические большие кошки с €ркой, этерической шерстью. Ёти существа не €вл€ютс€ "
                                   "насто€щими пантерами, а фейскими существами, принимающими облик больших, величественных кошек. Ћовкие и незаметные, их "
                                   "часто выбирают компаньонами дл€ тех, кто путешествует по волшебным или иным мирам.", 5);

    availablePets.push_back(pseudodragon);
    availablePets.push_back(BlinkDog);
    availablePets.push_back(FeyPanther);
}

const std::vector<Pet>& Pet::getAvailablePets() {
    if (availablePets.empty()) {
        initializeAvailablePets();
    }
    return availablePets;
}

const std::string& Pet::getName() const {
    return petname;
}

const std::string& Pet::getDescription() const {
    return description;
}

int Pet::getFixedDamage() const {
    return fixedDamage;
}

Pet Pet::createPet(const std::string& petName) {
    const auto& pets = Pet::getAvailablePets();

    for (const auto& pet : pets) {
        if (pet.getName() == petName) {
            return pet;
        }
    }
    return Pet("?", "Ќедоступный питомец ", "ќписание отсутствует", 0);
}
