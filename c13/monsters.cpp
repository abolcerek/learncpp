#include <iostream>
#include <string>

enum Monster_Types {
    Ogre, 
    Dragon,
    Orc,
    Giant_spider,
    Slime
};

struct Monster {
    Monster_Types Type;
    std::string name {};
    int base_health {};
};

constexpr std::string_view getMonsterType(Monster_Types &type) {
    switch (type) {
        case Ogre:
            return "Ogre";
        case Dragon:
            return "Dragon";
        case Orc:
            return "Orc";
        case Giant_spider:
            return "Giant spider";
        case Slime:
            return "Slime";
        }
}

void printMonster(Monster &x) {
    std::cout << "This "  << getMonsterType(x.Type) << " is named " << x.name << " and has " << x.base_health << " health\n"; 
}

int main() {
    Monster monster1;
    monster1.Type = Ogre;
    monster1.name = "Torg";
    monster1.base_health = 145;
    Monster monster2;
    monster2.Type = Slime;
    monster2.name = "Blurp";
    monster2.base_health = 23;
    printMonster(monster1);
    printMonster(monster2);
}