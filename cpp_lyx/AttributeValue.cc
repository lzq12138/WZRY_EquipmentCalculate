#include "AttributeValue.h"

AttributeValue::AttributeValue(std::string name="", double value1=0.0, double value2=0.0, double value3=0.0){
    m_name = name;
    m_baseValue = value1;
    m_extraValue = value2;
    m_percentageValue = value3;
}

std::string
AttributeValue::get_name(){
    return m_name;
}

void
AttributeValue::set_name(std::string name){
    m_name = name;
}

double
AttributeValue::get_baseValue(){
    return m_baseValue;
}

void
AttributeValue::set_baseValue(double value){
    m_baseValue = value;
}

double
AttributeValue::get_extraValue(){
    return m_extraValue;
}

void
AttributeValue::set_extraValue(double value){
    m_extraValue = value;
}

double
AttributeValue::get_percentageValue(){
    return m_percentageValue;
}

void
AttributeValue::set_persentageValue(double value){
    m_percentageValue = value;
}

void
AttributeValue::set(std::string name="", double value1=0.0, double value2=0.0, double value3=0.0){
    m_name = name;
    m_baseValue = value1;
    m_extraValue = value2;
    m_percentageValue = value3;
}

// attribute names
static const std::string attribute_name[N_ATTR] = {"生命值", "法力值", "物理攻击", "法术攻击", "物理防御", "法术防御", "移动速度", "物理穿透", "法术穿透", "攻击速度", "暴击率", "暴击伤害", "物理吸血", "法术吸血", "冷却缩减", "韧性", "生命回复", "法力回复"};

std::string 
idx2name(int idx){
    return attribute_name[idx];
}

int
name2idx(std::string name){
    for(int i = 0; i < N_ATTR; i++){
        if(attribute_name[i] == name){
            return i;
        }
    }
}
