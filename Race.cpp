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

    Race humans("Humans", "Люди - самая разнообразная и адаптивная раса,"
        "обладают различными чертами внешности, культурными особенностями и способностями"
        "в зависимости от своего происхождения. Люди известны своей амбицией, стремлением"
        "к достижению исключительных целей, а также способностью быстро обучаться и приспосабливаться к разным ситуациям."
        "Они могут занимать любые классы и разнообразные роли, от воинов до магов, от рыцарей до воров.");
    humans.addAttribute("Сила", 10);
    humans.addAttribute("Ловкость", 10);
    humans.addAttribute("Интеллект", 10);
    humans.addAttribute("Мудрость", 10);
    humans.addAttribute("Харизма", 10);
    humans.addAttribute("Телосложение", 10);
    humans.addAbility("Адаптабельность");
    humans.addAbility("Дополнительная точка навыка");

    Race elves("Elves", "Эльфы - изящные и грациозные существа, живут в гармонии с природой и обладают выдающимся долголетием."
        "Эльфы проявляют страсть к искусству, магии и музыке; известны своим поэтическим, песенным"
        "и магическим искусством, а когда угрожает опасность - показывают великолепное умение обращения с оружием."
        "Они имеют отличные навыки в стрельбе из лука и обладают особыми способностями к"
        "обнаружению скрытых и магических объектов.");
    elves.addAttribute("Сила", 10);
    elves.addAttribute("Ловкость", 15);
    elves.addAttribute("Интеллект", 12);
    elves.addAttribute("Мудрость", 14);
    elves.addAttribute("Харизма", 12);
    elves.addAttribute("Телосложение", 12);
    elves.addBonus("Ловкость", 2);
    elves.addPenalty("Телосложение", 2);
    elves.addAbility("Ночное видение");
    elves.addAbility("Устойчивость к сну");

    Race dragonborns("Dragonborns", "Драконорожденные - удивительные существа, обладающие уникальным внешним видом, напоминающим их предков - драконов:"
        "чешуя на коже, глаза ярких цветов и рога на голове. Их физическая мощь, выносливость и способности"
        "делают их отличными воинами и бойцами. Драконорожденные часто извлекают пользу из своих драконьих черт,"
        "таких как дыхание дракона, которое позволяет им извергать разрушительные элементарные атаки. Они обладают"
        "чувством чести и верности, и могут стать отличными защитниками.");
    dragonborns.addAttribute("Сила", 12);
    dragonborns.addAttribute("Ловкость", 8);
    dragonborns.addAttribute("Интеллект", 10);
    dragonborns.addAttribute("Мудрость", 10);
    dragonborns.addAttribute("Харизма", 12);
    dragonborns.addAttribute("Телосложение", 12);
    dragonborns.addBonus("Сила", 2);
    dragonborns.addBonus("Харизма", 1);
    dragonborns.addAbility("Пламя дракона");
    dragonborns.addAbility("Сопротивление дракона");

    Race dwarves("Dwarves", "Дварфы - крепкая и выносливая раса, известная своими густыми бородами, низким ростом и умением создавать прекрасные изделия из"
        "металла и камня. Они живут в подземельях и горных крепостях, имеют богатую историю и культуру. Дварфы славятся"
        "своей устойчивостью к ядам, болезням и магическим эффектам, а также мастерством в бою и горном деле. У них тесные семейные"
        "связи и гордость за свои древние традиции. ");
    dwarves.addAttribute("Сила", 10);
    dwarves.addAttribute("Ловкость", 8);
    dwarves.addAttribute("Интеллект", 10);
    dwarves.addAttribute("Мудрость", 12);
    dwarves.addAttribute("Харизма", 8);
    dwarves.addAttribute("Телосложение", 12);
    dwarves.addBonus("Телосложение", 2);
    dwarves.addPenalty("Ловкость", 2);
    dwarves.addAbility("Сопротивление яду");
    dwarves.addAbility("Каменная выдержка");

    Race orcs("Orcs", "Орки - сильная и воинственная раса, известная своей агрессивностью и боеспособностью. Орки обычно имеют высокий рост, кожу от"
        "светло-зеленой до темно-коричневой, и острые зубы. Они живут в племенах, руководимых вождями, и охотятся, сражаются и"
        "завоевывают новые земли. Орки часто изображаются как существа злые и разрушительные, но они также могут иметь собственные"
        "кодексы чести и верности к своим племенам.");
    orcs.addAttribute("Сила", 18);
    orcs.addAttribute("Ловкость", 10);
    orcs.addAttribute("Интеллект", 8);
    orcs.addAttribute("Мудрость", 10);
    orcs.addAttribute("Харизма", 6);
    orcs.addAttribute("Телосложение", 16);
    orcs.addBonus("Сила", 4);
    orcs.addPenalty("Интеллект", 2);
    orcs.addAbility("Ярость");
    orcs.addAbility("Сопротивление страху");



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
    return Race("Недоступная раса", "Описание отсутствует");
}

