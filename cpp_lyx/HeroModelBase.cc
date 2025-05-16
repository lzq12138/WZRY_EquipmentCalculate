#include "HeroModelBase.h"

HeroModelBase::HeroModelBase(std::string name, int attr_num=N_ATTR){
    m_name = name;
    m_attr_num = attr_num;
    m_attr_list = new AttributeValue[m_attr_num];
}

HeroModelBase::~HeroModelBase(){
    delete m_attr_list;
}

std::string
HeroModelBase::get_name(){
    return m_name;
}

void
HeroModelBase::set_name(std::string name){
    m_name = name;
}

std::string
HeroModelBase::get_AttackRange(){
    return m_AttackRange;
}

void
HeroModelBase::set_AttackRange(std::string AR){
    m_AttackRange = AR;
}

AttributeValue
HeroModelBase::get_Attribute(int attr){
    return m_attr_list[attr];
}

AttributeValue
HeroModelBase::get_Attribute_byname(std::string attr_name){
    for(int i=0; i<m_attr_num; i++){
        if(m_attr_list[i].get_name() == attr_name){
            return m_attr_list[i];
        }
    }
    throw std::invalid_argument("Attribute not found");
}

void
HeroModelBase::set_Attributes(double (&attrs)[N_ATTR][3]){
    for(int i = 0; i < N_ATTR; i++){
        m_attr_list[i].set(idx2name(i), attrs[i][0], attrs[i][1], attrs[i][2]);
    }
    return;
}


int
HeroModelBase::get_NAttributes(){
    return m_attr_num;
}
