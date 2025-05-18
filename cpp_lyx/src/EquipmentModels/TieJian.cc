#include "TieJian.h"

static const int attr_num = 1;

TieJian::TieJian() : EquipmentModelBase("铁剑", attr_num, 300){
    double attributes[attr_num][2] = {{25, 0}};
    int idx[attr_num] = {AD};

    set_Attributes(attributes, idx);
}