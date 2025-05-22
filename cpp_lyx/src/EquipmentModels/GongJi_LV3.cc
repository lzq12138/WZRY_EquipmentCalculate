#include "EquipmentModels/GongJi_LV3.h"

MoShi::MoShi() : EquipmentModelBase("末世", 3, 2160){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{60, 0}, {0, 30}, {0, 10}};
    int idx[attr_num] = {AD, AS, LS};

    set_Attributes(attributes, idx);
}

QiXueZhiRen::QiXueZhiRen() : EquipmentModelBase("泣血之刃", 3, 1800){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{100, 0}, {0, 25}, {500, 0}};
    int idx[attr_num] = {AD, LS, HP};

    set_Attributes(attributes, idx);
}

WuJinZhanRen::WuJinZhanRen() : EquipmentModelBase("无尽战刃", 2, 2110){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{120, 0}, {0, 20}};
    int idx[attr_num] = {AD, CR};

    set_Attributes(attributes, idx);
}

ZongShiZhiLi::ZongShiZhiLi() : EquipmentModelBase("宗师之力", 4, 2100){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{80, 0}, {0, 20}, {400, 0}, {600, 0}};
    int idx[attr_num] = {AD, CR, MP, HP};

    set_Attributes(attributes, idx);
}

ShanDianBiShou::ShanDianBiShou() : EquipmentModelBase("闪电匕首", 2, 1840){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{0, 35}, {0, 8}};
    int idx[attr_num] = {AS, MS};

    set_Attributes(attributes, idx);
}

YingRen::YingRen() : EquipmentModelBase("影刃", 4, 1950){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{40, 0}, {0, 35}, {0, 25}, {0, 5}};
    int idx[attr_num] = {AD, AS, CR, MS};

    set_Attributes(attributes, idx);
}

AnYingZhanFu::AnYingZhanFu() : EquipmentModelBase("暗影战斧", 3, 2090){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{80, 0}, {0, 10}, {500, 0}};
    int idx[attr_num] = {AD, CDR, HP};

    set_Attributes(attributes, idx);
}

QiangZhePoJun::QiangZhePoJun() : EquipmentModelBase("强者破军", 2, 2540){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{150, 0}, {0, 5}};
    int idx[attr_num] = {AD, CDR};

    set_Attributes(attributes, idx);
}

ZhuRiZhiGong::ZhuRiZhiGong() : EquipmentModelBase("逐日之弓", 4, 2050){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{50, 0}, {0, 25}, {0, 10}, {0, 5}};
    int idx[attr_num] = {AD, AS, CR, MS};

    set_Attributes(attributes, idx);
}

RenZhePoXiao::RenZhePoXiao() : EquipmentModelBase("仁者破晓", 3, 2570){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{90, 0}, {0, 30}, {0, 10}};
    int idx[attr_num] = {AD, AS, CR};

    set_Attributes(attributes, idx);
}

ZhuFeng::ZhuFeng() : EquipmentModelBase("逐风", 3, 2090){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{65, 0}, {0, 25}, {700, 0}};
    int idx[attr_num] = {AD, AS, HP};

    set_Attributes(attributes, idx);
}

XunJiRiYuan::XunJiRiYuan() : EquipmentModelBase("迅捷日渊", 4, 3270){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{50, 0}, {0, 25}, {0, 10}, {0, 5}};
    int idx[attr_num] = {AD, AS, CR, MS};

    set_Attributes(attributes, idx);
}

BuDongTianQiong::BuDongTianQiong() : EquipmentModelBase("不动天穹", 3, 3250){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{100, 0}, {0, 10}, {500, 0}};
    int idx[attr_num] = {AD, CDR, HP};

    set_Attributes(attributes, idx);
}