#include "AttributeValue.h"


class EquipmentModelBase{
    public:
        EquipmentModelBase(std::string name, int attr_num);
        ~EquipmentModelBase();


        // get Attribute by index
        AttributeValue get_Attribute(int attr);

        // get Attribute by name
        AttributeValue get_Attribute_byname(std::string attr_name);
        

    private:
        std::string m_name;         // Equipment Name
        AttributeValue * attr_list; // Pointer to Attribute List
        int m_attr_num;             // Number of Attributes
        int m_price;                // equipment price
};