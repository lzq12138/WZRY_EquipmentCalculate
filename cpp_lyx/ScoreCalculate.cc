#include"ScoreCalculate.h"\

double attribute_score(int price, double attribute)
{
    double price_factor = 1.0;
    return 1 - exp(price - price_factor * attribute);
}

