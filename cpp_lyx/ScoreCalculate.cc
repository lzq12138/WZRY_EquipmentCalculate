#include "ScoreCalculate.h"

double attribute_score_calculation(int price, double price_factor, double value)
{
    return 1 - exp(price - price_factor * value);
}

double attribute_score(AttributeValue attr, int price){
    std::string name = attr.get_name();
    int idx = name2idx(name);
    double factor = base_factor_from_idx(idx);
    double value = attr.get_extraValue();           // only extra attribute should be calculate
    return attribute_score_calculation(price, factor, value);
}

static double base_attribute_factor[N_ATTR] = {HP_FACTOR, MP_FACTOR, AD_FACTOR, AP_FACTOR, PD_FACTOR, MD_FACTOR, MS_FACTOR, PPen_FACTOR, MPen_FACTOR, AS_FACTOR, CR_FACTOR, CD_FACTOR, LS_FACTOR, SV_FACTOR, CDR_FACTOR, Tenacity_FACTOR, HReg_FACTOR, MReg_FACTOR};

double base_factor_from_idx(int idx){
    return base_attribute_factor[idx];
}


