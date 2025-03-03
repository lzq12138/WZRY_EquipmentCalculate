#include "AttributeValue.h"

AttributeValue::AttributeValue(std::string name="", double value1=0.0, double value2=0.0, double value3=0.0){
    m_name = name;
    m_value = value1;
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
AttributeValue::get_Value(){
    return m_value;
}

void
AttributeValue::set_Value(double value){
    m_value = value;
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