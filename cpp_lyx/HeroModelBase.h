#include <string>

#include "AttributeValue.h"

class HeroModelBase{
    public:
    HeroModelBase(std::string name);

    AttributeValue HP;          // Health Point
    AttributeValue MP;          // Magic Point
    AttributeValue AD;          // Attack Damage
    AttributeValue AP;          // Attack Power
    AttributeValue PD;          // Physical Defense
    AttributeValue MD;          // Magical Defense

    AttributeValue MS;          // Movement Speed
    AttributeValue PPen;        // Physical Penetration
    AttributeValue MPen;        // Magical Penetration
    AttributeValue AS;          // Attack Speed
    AttributeValue CR;          // Critical Rate
    AttributeValue CD;          // Critical Damage
    AttributeValue LS;          // Life Steal
    AttributeValue SV;          // Spell Vamp
    AttributeValue CDR;         // Cooldown Reduction
    std::string AttackRange;    // Attack Range

    AttributeValue Tenacity;    // Tenacity
    AttributeValue HReg;        // Health Regeneration
    AttributeValue MReg;        // Magic Regeneration

    private:
    std::string m_name;


};