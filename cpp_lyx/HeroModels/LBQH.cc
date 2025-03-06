#include "LBQH.h"

LBQH::LBQH() : HeroModelBase("鲁班七号"){
    HP.set_Value(3366);
    MP.set_Value(440);
    AD.set_Value(174);
    AP.set_Value(0);
    PD.set_Value(150);
    PD.set_persentageValue(20);
    MD.set_Value(75);
    MD.set_persentageValue(11.1);

    MS.set_Value(370);
    PPen.set_Value(0);
    PPen.set_persentageValue(0);
    MPen.set_Value(0);
    MPen.set_persentageValue(0);
    AS.set_persentageValue(10);
    CR.set_persentageValue(0);
    CD.set_persentageValue(200);
    LS.set_persentageValue(0);
    SV.set_persentageValue(0);
    CDR.set_persentageValue(0);
    AttackRange = "远程";

    Tenacity.set_persentageValue(0);
    HReg.set_Value(42);
    MReg.set_Value(15);
}


