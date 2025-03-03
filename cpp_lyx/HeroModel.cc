#include "HeroModel.h"

HeroModelBase::HeroModelBase(std::string name){
    m_name = name;
    HP = AttributeValue();
    MP = AttributeValue();
    AD = AttributeValue();
    AP = AttributeValue();
    PD = AttributeValue();
    MD = AttributeValue();
}