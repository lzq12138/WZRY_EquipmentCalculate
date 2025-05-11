#include <string>

#include "AttributeValue.h"

class HeroModelBase{
    public:
    HeroModelBase(std::string name, int attr_num=18);
    ~HeroModelBase();


    // Set Hero Name
    void set_name(std::string name);
    // Get Hero Name
    std::string get_name();
    
    // Set Attack Range
    void set_AttackRange(std::string AR);
    // Get Attack Range
    std::string get_AttackRange();

    // get Attribute by index
    AttributeValue get_Attribute(int attr);

    // get Attribute by name
    AttributeValue get_Attribute_byname(std::string attr_name);

    private:

    std::string m_name;             // Hero Name

    std::string m_AttackRange;      // Attack Range

    AttributeValue * m_attr_list;   // Pointer to Attribute List
    int m_attr_num;                 // Number of Attributes

};