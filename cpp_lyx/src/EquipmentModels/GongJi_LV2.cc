#include "EquipmentModels/GongJi_LV2.h"

FengBaoJuJian::FengBaoJuJian() : EquipmentModelBase("风暴巨剑", 1, 850){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{75, 0}};
    int idx[attr_num] = {AD};

    set_Attributes(attributes, idx);
}

RiMian::RiMian() : EquipmentModelBase("日冕", 3, 710){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{25, 0}, {0, 5}, {400, 0}};
    int idx[attr_num] = {AD, CDR, HP};

    set_Attributes(attributes, idx);
}

KuangBaoShuangRen::KuangBaoShuangRen() : EquipmentModelBase("狂暴双刃", 3, 900){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 18}, {0, 10}, {0, 5}};
    int idx[attr_num] = {AS, CR, MS};

    set_Attributes(attributes, idx);
}

YunXing::YunXing() : EquipmentModelBase("陨星", 1, 930){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{55, 0}};
    int idx[attr_num] = {AD};

    set_Attributes(attributes, idx);
}

SuJiZhiQiang::SuJiZhiQiang() : EquipmentModelBase("速击之枪", 1, 880){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 20}};
    int idx[attr_num] = {AS};

    set_Attributes(attributes, idx);
}

XueHunRen::XueHunRen() : EquipmentModelBase("血魂刃", 2, 830){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{30, 0}, {0, 10}};
    int idx[attr_num] = {AD, LS};

    set_Attributes(attributes, idx);
}

ChuanYunGong::ChuanYunGong() : EquipmentModelBase("穿云弓", 2, 1100){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{40, 0}, {0, 10}};
    int idx[attr_num] = {AD, AS};

    set_Attributes(attributes, idx);
}

MingDaoSiMing::MingDaoSiMing() : EquipmentModelBase("名刀司命", 2, 1900){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{60, 0}, {0, 5}};
    int idx[attr_num] = {AD, CDR};

    set_Attributes(attributes, idx);
}

SuiXingChui::SuiXingChui() : EquipmentModelBase("碎星锤", 2, 2080){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{80, 0}, {0, 10}};
    int idx[attr_num] = {AD, CDR};

    set_Attributes(attributes, idx);
}

PoMoDao::PoMoDao() : EquipmentModelBase("破魔刀", 3, 2060){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{90, 0}, {100, 0}, {500, 0}};
    int idx[attr_num] = {AD, MD, HP};

    set_Attributes(attributes, idx);
}

HanShuangQinXi::HanShuangQinXi() : EquipmentModelBase("寒霜侵袭", 3, 2060){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{70, 0}, {0, 30}, {750, 0}};
    int idx[attr_num] = {AD, AS, HP};

    set_Attributes(attributes, idx);
}

ZhiCaiZhiRen::ZhiCaiZhiRen() : EquipmentModelBase("制裁之刃", 3, 1860){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{100, 0}, {0, 15}, {0, 15}};
    int idx[attr_num] = {AD, AS, LS};

    set_Attributes(attributes, idx);
}

ChunJingCangQiong::ChunJingCangQiong() : EquipmentModelBase("纯净苍穹", 3, 2120){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{100, 0}, {0, 10}, {500, 0}};
    int idx[attr_num] = {AD, CDR, HP};

    set_Attributes(attributes, idx);
}