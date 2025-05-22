#include "EquipmentModels/FaShu_LV1.h"

ZhouShuDianJi::ZhouShuDianJi() : EquipmentModelBase("咒术典籍", 1, 300){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{40, 0}};
    int idx[attr_num] = {AP};

    set_Attributes(attributes, idx);
}

LanBaoShi::LanBaoShi(): EquipmentModelBase("蓝宝石", 1, 190){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{250, 0}};
    int idx[attr_num] = {MP};

    set_Attributes(attributes, idx);
}

LianJinHuFu::LianJinHuFu(): EquipmentModelBase("炼金护符", 1, 130){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{10, 0}};
    int idx[attr_num] = {MReg};

    set_Attributes(attributes, idx);
}

ShengZheFaDian::ShengZheFaDian(): EquipmentModelBase("圣者法典", 2, 425){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{25, 0}, {0, 5}};
    int idx[attr_num] = {AP, CDR};

    set_Attributes(attributes, idx);
}

YuanSuZhang::YuanSuZhang(): EquipmentModelBase("元素杖", 1, 540){
    int attr_num = get_NAttributes();
    double attributes[attr_num][2] = {{80, 0}};
    int idx[attr_num] = {AP};

    set_Attributes(attributes, idx);
}