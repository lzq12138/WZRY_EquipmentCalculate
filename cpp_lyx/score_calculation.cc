#include <math.h>

#ifndef PRICE_FACTOR
#define PRICE_FACTOR
#define AD_FACTOR 12.0      // attack damage factor
#define AS_FACTOR 29.0      // attack speed factor
#define CR_FACTOR 35.0      // critical rate factor
#define LS_FACTOR 36.25     // life steal factor
#endif  


double attribute_score(int price, double attribute)
{
    double price_factor = 1.0;
    return 1 - exp(price - price_factor * attribute);
}

