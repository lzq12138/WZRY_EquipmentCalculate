#ifndef PRICE_FACTOR
#define PRICE_FACTOR

#include <math.h>

#define HP_FACTOR 1.0          // Health Point factor
#define MP_FACTOR 0.95         // Magic Point factor
#define AD_FACTOR 12.0         // Attack Damage factor
#define AP_FACTOR 7.5          // Attack Power factor
#define PD_FACTOR 2.44         // Physical Defense factor
#define MD_FACTOR 2.44         // Magical Defense factor
#define MS_FACTOR 8.33         // Movement Speed factor
#define PPen_FACTOR 0.0        // Physical Penetration factor
#define MPen_FACTOR 0.0        // Magical Penetration factor
#define AS_FACTOR 29.0         // Attack Speed factor
#define CR_FACTOR 35.0         // Critical Rate factor
#define CD_FACTOR 0.0          // Critical Damage factor
#define LS_FACTOR 36.25        // Life Steal factor
#define SV_FACTOR 0.0          // Spell Vamp factor
#define CDR_FACTOR 0.0         // Cooldown Reduction factor
#define Tenacity_FACTOR 0.0    // Tenacity factor
#define HReg_FACTOR 4.67       // Health Regeneration factor
#define MReg_FACTOR 13         // Magic Regeneration factor

double attribute_score(int price, double attribute);

#endif  
