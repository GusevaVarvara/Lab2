#include "Class.h"

std::vector<Class> Class::availableClasses;

Class::Class(const std::string& name, const std::string& description)
    : name(name), description(description) {}

void Class::addAbility(const std::string& ability) {
    abilities.push_back(ability);
}

void Class::addAttribute(const std::string& attributeName, int value) {
    attributes.emplace_back(attributeName, value);
}

void Class::addBonus(const std::string& attributeToModify, int bonusValue) {
    bonuses.emplace_back(attributeToModify, bonusValue);
}

void Class::addPenalty(const std::string& attributeToModify, int penaltyValue) {
    penalties.emplace_back(attributeToModify, penaltyValue);
}

void Class::addAvailableClasses(const Class& characterClass) {
    availableClasses.push_back(characterClass);
}

void Class::initializeAvailableClasses() {

    Class warrior("Warrior", "Воины - мастера в ближнем бою, обладающие силой и навыками,"
        "необходимыми для ведения сражений. Они обладают высокими "
        "хитами, навыками в обращении с оружием и броней, а также выбором "
        "боевых стилей и военных подклассов.");
    warrior.addAttribute("Сила", 15);
    warrior.addAttribute("Ловкость", 10);
    warrior.addAttribute("Интеллект", 8);
    warrior.addAttribute("Выносливость", 12);
    warrior.addAbility("Мощный удар");
    warrior.addAbility("Блокировка");

    Class wizard("Wizard", "Маги - обладатели знаний и мастерства в колдовстве. Их сила происходит "
        "из глубокого понимания магии и способности использовать заклинания для "
        "манипуляции реальностью. Открывая тайны арканы, маги могут вызывать могущественные "
        "эффекты, от взрывов огня до временных измерений.");
    wizard.addAttribute("Сила", 8);
    wizard.addAttribute("Ловкость", 10);
    wizard.addAttribute("Интеллект", 15);
    wizard.addAttribute("Мудрость", 12);
    wizard.addAttribute("Телосложение", 10);
    wizard.addAttribute("Харизма", 10);
    wizard.addAbility("Магия огня");
    wizard.addAbility("Телепортация");

    Class rogue("Rogue", "Воры - ловкие и хитрые персонажи, специализирующиеся на скрытности, уклонении и выполнении "
        "заданий незаметно. Они могут быть ловкими воришками или мастерами убийств. Воры обладают навыками "
        "в обмане, восприятии и обращении с ловким оружием.");
    rogue.addAttribute("Сила", 12);
    rogue.addAttribute("Ловкость", 15);
    rogue.addAttribute("Интеллект", 10);
    rogue.addAbility("Скрытность");
    rogue.addAbility("Взлом замков");

    Class cleric("Cleric", "Жрецы - служители божеств, обладающие священной магией. Они могут быть лекарями, защитниками веры "
        "или наносителями священного урона. Жрецы могут лечить союзников, вызывать благословения или проклятия, "
        "и даже бороться с нежитью. У них есть доступ к божественным заклинаниям и специфическим предметам.");
    cleric.addAttribute("Сила", 10);
    cleric.addAttribute("Ловкость", 10);
    cleric.addAttribute("Интеллект", 12);
    cleric.addAbility("Исцеление");
    cleric.addAbility("Призыв божественной магии");

    Class druid("Druid", "Друиды - защитники природы, обладающие магией, которая связана с растениями, животными и стихиями.Они "
        "могут менять облик, вызывать силы природы и лечить союзников. Друиды обладают способностью общения с "
        "животными, формами дикой природы и могут использовать заклинания, связанные с природой.Они также могут "
        "быть защитниками окружающей среды.");
    druid.addAttribute("Сила", 10);
    druid.addAttribute("Ловкость", 12);
    druid.addAttribute("Интеллект", 10);
    druid.addAbility("Облик зверя");
    druid.addAbility("Использование природной магии");

    availableClasses.push_back(warrior);
    availableClasses.push_back(wizard);
    availableClasses.push_back(rogue);
    availableClasses.push_back(cleric);
    availableClasses.push_back(druid);
}


const std::string& Class::getName() const {
    return name;
}

const std::string& Class::getDescription() const {
    return description;
}

const std::vector<std::string>& Class::getAbilities() const {
    return abilities;
}

const std::vector<std::pair<std::string, int>>& Class::getAttributes() const {
    return attributes;
}

const std::vector<std::pair<std::string, int>>& Class::getBonuses() const {
    return bonuses;
}

const std::vector<std::pair<std::string, int>>& Class::getPenalties() const {
    return penalties;
}

const std::vector<Class>& Class::getAvailableClasses() {
    return availableClasses;
}

Class Class::createClass(const std::string& className) {
    for (const Class& characterClass : availableClasses) {
        if (characterClass.getName() == className) {
            return characterClass;
        }
    }
    return Class("Недоступный класс", "Описание отсутствует");
}
