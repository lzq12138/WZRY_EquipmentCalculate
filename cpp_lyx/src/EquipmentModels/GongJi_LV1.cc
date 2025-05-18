#include "EquipmentModels/GongJi_LV1.h"

TieJian::TieJian() : EquipmentModelBase("铁剑", 1, 300){\
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{25, 0}};
    int idx[attr_num] = {AD};

    set_Attributes(attributes, idx);
}

BiShou::BiShou(): EquipmentModelBase("匕首", 1, 290){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 10}};
    int idx[attr_num] = {AS};

    set_Attributes(attributes, idx);
}

BoJiQuanTao::BoJiQuanTao(): EquipmentModelBase("搏击拳套", 1, 290){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 8}};
    int idx[attr_num] = {CR};

    set_Attributes(attributes, idx);
}

XiXueZhiLian::XiXueZhiLian(): EquipmentModelBase("吸血之镰", 1, 290){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 8}};
    int idx[attr_num] = {LS};

    set_Attributes(attributes, idx);
}

XunJieChangMao::XunJieChangMao(): EquipmentModelBase("迅捷长矛", 2, 375){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{10, 0}, {0, 5}};
    int idx[attr_num] = {AD, CDR};

    set_Attributes(attributes, idx);
}

LeiMingRen::LeiMingRen(): EquipmentModelBase("雷鸣刃", 1, 450){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{40, 0}};
    int idx[attr_num] = {AD};

    set_Attributes(attributes, idx);
}

ChongNengQuanTao::ChongNengQuanTao(): EquipmentModelBase("充能拳套", 1, 520){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 15}};
    int idx[attr_num] = {CR};

    set_Attributes(attributes, idx);
}