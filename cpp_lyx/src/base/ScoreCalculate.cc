#include "base/ScoreCalculate.h"


ScoreDetail::ScoreDetail(double attributes_score, double passive_ability_score, int price){
    m_attributes_score = attributes_score;
    m_passive_ability_score = passive_ability_score;
    m_price = price;
}

double
ScoreDetail::get_price_score(){
    return m_price - m_attributes_score - m_passive_ability_score;
}


double
ScoreDetail::get_score(){
    return m_base_score + 1.0 - exp(get_price_score() / m_price_factor_scaler);
}

ScoreDetail equipment_score(int price, double attribute_scores[], int attribute_num){
    double attributes_score = 0.0;
    double passive_ability_score = 0.0;     // not implemented yet
    for(int i = 0; i < attribute_num; i++){
        attributes_score += attribute_scores[i];
    }
    ScoreDetail score_detail(attributes_score, passive_ability_score, price);
    return score_detail;
}

double attribute_score(AttributeValue attr){
    std::string name = attr.get_name();
    int idx = name2idx(name);
    double base_factor = base_factor_from_idx(idx);
    double base_value = attr.get_extraValue();      // only extra attribute should be calculate
    double percentage_factor = extra_factor_from_idx(idx);
    double percentage_value = attr.get_percentageValue();
    return base_factor * base_value + percentage_factor * percentage_value;
}

static const double base_attribute_factor[N_ATTR] = {HP_FACTOR, MP_FACTOR, AD_FACTOR, AP_FACTOR, PD_FACTOR, MD_FACTOR, MS_FACTOR, PPen_FACTOR, MPen_FACTOR, AS_FACTOR, CR_FACTOR, CD_FACTOR, LS_FACTOR, SV_FACTOR, CDR_FACTOR, Tenacity_FACTOR, HReg_FACTOR, MReg_FACTOR};
static const double extra_attribute_factor[N_ATTR] = {HP_FACTOR2, MP_FACTOR2, AD_FACTOR2, AP_FACTOR2, PD_FACTOR2, MD_FACTOR2, MS_FACTOR2, PPen_FACTOR2, MPen_FACTOR2, AS_FACTOR2, CR_FACTOR2, CD_FACTOR2, LS_FACTOR2, SV_FACTOR2, CDR_FACTOR2, Tenacity_FACTOR2, HReg_FACTOR2, MReg_FACTOR2};


double base_factor_from_idx(int idx){
    return base_attribute_factor[idx];
}

double extra_factor_from_idx(int idx){
    return extra_attribute_factor[idx];
}
