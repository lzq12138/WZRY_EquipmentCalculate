#include "EquipmentModelBase.h"

EquipmentModelBase::EquipmentModelBase(std::string name, int attr_num){
    m_name = name;
    m_attr_num = attr_num;
    attr_list = new AttributeValue[m_attr_num];
}

AttributeValue
EquipmentModelBase::get_Attribute(int attr){
    std::string attr_name = "";
    switch(attr){
        case HP: attr_name = "生命值"; break;
        case MP: attr_name = "法力值"; break;
        case AD: attr_name = "物理攻击"; break;
        case AP: attr_name = "法术攻击"; break;
        case PD: attr_name = "物理防御"; break;
        case MD: attr_name = "法术防御"; break;
        case MS: attr_name = "移动速度"; break;
        case PPen: attr_name = "物理穿透"; break;
        case MPen: attr_name = "法术穿透"; break;
        case AS: attr_name = "攻击速度"; break;
        case CR: attr_name = "暴击率"; break;
        case CD: attr_name = "暴击伤害"; break;
        case LS: attr_name = "物理吸血"; break;
        case SV: attr_name = "法术吸血"; break;
        case CDR: attr_name = "冷却缩减"; break;
        case Tenacity: attr_name = "韧性"; break;
        case HReg: attr_name = "生命回复"; break;
        case MReg: attr_name = "法力回复"; break;
        default: throw std::invalid_argument("Attribute not found");
    }

    return get_Attribute_byname(attr_name);
}

AttributeValue
EquipmentModelBase::get_Attribute_byname(std::string attr_name){
    for(int i=0; i<m_attr_num; i++){
        if(attr_list[i].get_name() == attr_name){
            return attr_list[i];
        }
    }
    throw std::invalid_argument("Attribute not found");
}