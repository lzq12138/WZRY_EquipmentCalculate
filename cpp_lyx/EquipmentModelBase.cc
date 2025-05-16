#include "EquipmentModelBase.h"

EquipmentModelBase::EquipmentModelBase(std::string name, int attr_num, int price){
    m_name = name;
    m_attr_num = attr_num;
    m_price = price;
    m_attr_list = new AttributeValue[m_attr_num];
}

EquipmentModelBase::~EquipmentModelBase(){
    delete m_attr_list;
}

AttributeValue
EquipmentModelBase::get_Attribute(int idx){
    std::string attr_name = idx2name(idx);

    return get_Attribute_byname(attr_name);
}

AttributeValue
EquipmentModelBase::get_Attribute_byname(std::string attr_name){
    for(int i=0; i<m_attr_num; i++){
        if(m_attr_list[i].get_name() == attr_name){
            return m_attr_list[i];
        }
    }
    throw std::invalid_argument("Attribute not found");
}

void
EquipmentModelBase::set_Attributes(double (&attr)[][2], int (&idx)[]){
    for(int i = 0; i < m_attr_num; i++){
        m_attr_list[i].set(idx2name(idx[i]), 0.0, attr[i][0], attr[i][1]);       // no base value for equipment
    }
}
