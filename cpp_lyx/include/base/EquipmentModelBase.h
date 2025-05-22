#ifndef EquipmentModelBase_H
#define EquipmentModelBase_H

#include <stdexcept>

#include "base/AttributeValue.h"
#include "base/ScoreCalculate.h"

class EquipmentModelBase{
    public:
    EquipmentModelBase(std::string name, int attr_num, int price);
    ~EquipmentModelBase();

    // Get Equipment Name
    std::string get_name();
    // Set Equipment Name
    void set_name(std::string name);

    // get Attribute by index
    AttributeValue get_Attribute(int attr);

    // get Attribute by name
    AttributeValue get_Attribute_byname(std::string attr_name);

    // get attribute from list (list index), used for traverse
    AttributeValue get_Attribute_from_list(int idx);

    // set Attributes for this equipment
    void set_Attributes(double attr[][2], int idx[]);

    // get number of attributes
    int get_NAttributes();

    // calculate equipement score
    double get_Score();

    private:
    std::string m_name;         // Equipment Name
    AttributeValue * m_attr_list; // Pointer to Attribute List
    int m_attr_num;             // Number of Attributes
    int m_price;                // equipment price
};

#endif