#include "AttributeValue.h"

AttributeValue::AttributeValue(double value1=0.0, double value2=0.0){
        m_value = value1;
        m_extraValue = value2;
        
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