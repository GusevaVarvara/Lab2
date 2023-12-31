#include "Race.h"

std::vector<Race> Race::availableRaces;

Race::Race(const std::string& name, const std::string& description)
    : Character(name, 100, 0), description(description) {}

void Race::addAvailableRace(const Race& race) {
    availableRaces.push_back(race);
}

void Race::initializeAvailableRaces() {

    Race humans("Humans", "Люди - самая разнообразная и адаптивная раса,"
        "обладают различными чертами внешности, культурными особенностями и способностями"
        "в зависимости от своего происхождения. Люди известны своей амбицией, стремлением"
        "к достижению исключительных целей, а также способностью быстро обучаться и приспосабливаться к разным ситуациям."
        "Они могут занимать любые классы и разнообразные роли, от воинов до магов, от рыцарей до воров.");


    Race elves("Elves", "Эльфы - изящные и грациозные существа, живут в гармонии с природой и обладают выдающимся долголетием."
        "Эльфы проявляют страсть к искусству, магии и музыке; известны своим поэтическим, песенным"
        "и магическим искусством, а когда угрожает опасность - показывают великолепное умение обращения с оружием."
        "Они имеют отличные навыки в стрельбе из лука и обладают особыми способностями к"
        "обнаружению скрытых и магических объектов.");


    Race dragonborns("Dragonborns", "Драконорожденные - удивительные существа, обладающие уникальным внешним видом, напоминающим их предков - драконов:"
        "чешуя на коже, глаза ярких цветов и рога на голове. Их физическая мощь, выносливость и способности"
        "делают их отличными воинами и бойцами. Драконорожденные часто извлекают пользу из своих драконьих черт,"
        "таких как дыхание дракона, которое позволяет им извергать разрушительные элементарные атаки. Они обладают"
        "чувством чести и верности, и могут стать отличными защитниками.");


    Race dwarves("Dwarves", "Дварфы - крепкая и выносливая раса, известная своими густыми бородами, низким ростом и умением создавать прекрасные изделия из"
        "металла и камня. Они живут в подземельях и горных крепостях, имеют богатую историю и культуру. Дварфы славятся"
        "своей устойчивостью к ядам, болезням и магическим эффектам, а также мастерством в бою и горном деле. У них тесные семейные"
        "связи и гордость за свои древние традиции. ");


    Race orcs("Orcs", "Орки - сильная и воинственная раса, известная своей агрессивностью и боеспособностью. Орки обычно имеют высокий рост, кожу от"
        "светло-зеленой до темно-коричневой, и острые зубы. Они живут в племенах, руководимых вождями, и охотятся, сражаются и"
        "завоевывают новые земли. Орки часто изображаются как существа злые и разрушительные, но они также могут иметь собственные"
        "кодексы чести и верности к своим племенам.");



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

const std::string& Race::getDescription() const {
    return description;
}

Race Race::createRace(const std::string& raceName) {
    const auto& races = Race::getAvailableRaces();

    for (const auto& race : races) {
        if (race.getName() == raceName) {
            return race;
        }
    }
    return Race("Недоступная раса", "Описание отсутствует");
}

