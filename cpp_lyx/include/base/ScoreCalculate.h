#ifndef PRICE_FACTOR
#define PRICE_FACTOR

#include <math.h>

#include "base/AttributeValue.h"

// base attribute factor
#define HP_FACTOR 1.0          // Health Point factor
#define MP_FACTOR 0.95         // Magic Point factor
#define AD_FACTOR 12.0         // Attack Damage factor
#define AP_FACTOR 7.5          // Attack Power factor
#define PD_FACTOR 2.44         // Physical Defense factor
#define MD_FACTOR 2.44         // Magical Defense factor
#define MS_FACTOR 8.33         // Movement Speed factor
#define PPen_FACTOR 0.0        // Physical Penetration factor
#define MPen_FACTOR 0.0        // Magical Penetration factor
#define AS_FACTOR 0.0          // Attack Speed factor
#define CR_FACTOR 0.0          // Critical Rate factor
#define CD_FACTOR 0.0          // Critical Damage factor
#define LS_FACTOR 0.0          // Life Steal factor
#define SV_FACTOR 0.0          // Spell Vamp factor
#define CDR_FACTOR 0.0         // Cooldown Reduction factor
#define Tenacity_FACTOR 0.0    // Tenacity factor
#define HReg_FACTOR 4.67       // Health Regeneration factor
#define MReg_FACTOR 13         // Magic Regeneration factor

// percentage attribute factor
#define HP_FACTOR2 0.0         // Health Point factor
#define MP_FACTOR2 0.0         // Magic Point factor
#define AD_FACTOR2 0.0         // Attack Damage factor
#define AP_FACTOR2 0.0         // Attack Power factor
#define PD_FACTOR2 0.0         // Physical Defense factor
#define MD_FACTOR2 0.0         // Magical Defense factor
#define MS_FACTOR2 0.0         // Movement Speed factor
#define PPen_FACTOR2 0.0       // Physical Penetration factor
#define MPen_FACTOR2 0.0       // Magical Penetration factor
#define AS_FACTOR2 29.0        // Attack Speed factor
#define CR_FACTOR2 35.0        // Critical Rate factor
#define CD_FACTOR2 0.0         // Critical Damage factor
#define LS_FACTOR2 36.25       // Life Steal factor
#define SV_FACTOR2 0.0         // Spell Vamp factor
#define CDR_FACTOR2 51.0        // Cooldown Reduction factor
#define Tenacity_FACTOR2 0.0   // Tenacity factor
#define HReg_FACTOR2 0.0       // Health Regeneration factor
#define MReg_FACTOR2 0.0       // Magic Regeneration factor

class ScoreDetail{
    public:
    ScoreDetail(double attributes_score, double passive_ability_score, int price);

    // get price score
    double get_price_score();

    // get score
    double get_score();

    private:
    double m_attributes_score;
    double m_passive_ability_score;
    double m_price_factor_scaler = 100.0;
    double m_base_score = 10.0;
    int m_price;
};

ScoreDetail equipment_score(int price, double attributes_score);
double attribute_score(AttributeValue attr);
double attribute_attempt_score(AttributeValue attr, double attempt_base_factor, double attempt_extra_factor);


double base_factor_from_idx(int idx);
double extra_factor_from_idx(int idx);

#endif  
