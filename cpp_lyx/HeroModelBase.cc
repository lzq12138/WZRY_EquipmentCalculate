#include "HeroModelBase.h"

HeroModelBase::HeroModelBase(std::string name, int attr_num=18){
    m_name = name;
    m_attr_num = attr_num;
    m_attr_list = new AttributeValue[m_attr_num];
}

void
HeroModelBase::set_AttackRange(std::string AR){
    m_AttackRange = AR;
}

std::string
HeroModelBase::get_AttackRange(){
    return m_AttackRange;
}

AttributeValue
HeroModelBase::get_Attribute(int attr){
    return m_attr_list[attr];
}