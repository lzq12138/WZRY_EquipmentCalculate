#include <string>

#include "AttributeValue.h"

class HeroModelBase{
    public:
    HeroModelBase(std::string name);

    AttributeValue HP;      // Health Point
    AttributeValue MP;      // Magic Point
    AttributeValue AD;      // Attack Damage
    AttributeValue AP;      // Attack Power
    AttributeValue PD;      // Physical Defense
    AttributeValue MD;      // Magical Defense

    // AttributeValue MS;      // Movement Speed
    // AttributeValue hp;
    // AttributeValue hp;

    private:
    std::string m_name;


};