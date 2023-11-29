#pragma once

#include "character.h"
#include <vector>

class Class : public Character {
public:
    Class(const std::string& name, const std::string& classname, const std::string& description);

    void addAvailableClasses(const Class& characterClass);

    const std::string& getName() const;
    const std::string& getDescription() const;

    static void initializeAvailableClasses();
    static const std::vector<Class>& getAvailableClasses();
    static Class createClass(const std::string& className);

private:
    static std::vector<Class> availableClasses;
    std::string classname;
    std::string name;
    std::string description;
};
