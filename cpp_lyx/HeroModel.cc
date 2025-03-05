#include "HeroModel.h"

HeroModelBase::HeroModelBase(std::string name){
    m_name = name;
    HP = AttributeValue();
    MP = AttributeValue();
    AD = AttributeValue();
    AP = AttributeValue();
    PD = AttributeValue();
    MD = AttributeValue();

    MS = AttributeValue();
    PPen = AttributeValue();
    MPen = AttributeValue();
    AS = AttributeValue();
    CR = AttributeValue();
    CD = AttributeValue();
    LS = AttributeValue();
    SV = AttributeValue();
    CDR = AttributeValue();
    AttackRange = "";

    Tenacity = AttributeValue();
    HReg = AttributeValue();
    MReg = AttributeValue();
}