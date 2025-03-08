#include <string>

#include "AttributeValue.h"

class HeroModelBase{
    public:
    HeroModelBase(std::string name, int attr_num=18);
        
    void set_AttackRange(std::string AR);
    std::string get_AttackRange();

    AttributeValue get_Attribute(int attr);

    private:

    std::string m_name;             // Hero Name

    std::string m_AttackRange;      // Attack Range

    AttributeValue * m_attr_list;   // Pointer to Attribute List
    int m_attr_num;                 // Number of Attributes

};