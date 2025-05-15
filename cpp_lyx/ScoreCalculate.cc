#include "ScoreCalculate.h"

double attribute_score_calculation(int price, double price_factor, double attribute)
{
    return 1 - exp(price - price_factor * attribute);
}

