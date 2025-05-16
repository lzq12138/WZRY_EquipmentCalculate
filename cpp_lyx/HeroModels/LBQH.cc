#include "LBQH.h"

LBQH::LBQH() : HeroModelBase("鲁班七号"){
    set_AttackRange("远程");
    
    double attributes[N_ATTR][3] = {{3366, 0, 0},       // 生命值
                                    {440, 0, 0},        // 法力值
                                    {174, 0, 0},        // 物理攻击
                                    {0, 0, 0},          // 法术攻击
                                    {150, 0, 20},       // 物理防御
                                    {75, 0, 11.1},      // 法术防御
                                    {370, 0, 0},        // 移动速度
                                    {0, 0, 0},          // 物理穿透
                                    {0, 0, 0},          // 法术穿透
                                    {0, 10, 0},         // 攻击速度
                                    {0, 0, 0},          // 暴击率
                                    {0, 200, 0},        // 暴击伤害
                                    {0, 0, 0},          // 物理吸血
                                    {0, 0, 0},          // 法术吸血
                                    {0, 0, 0},          // 冷却缩减
                                    {0, 0, 0},          // 韧性
                                    {42, 0, 0},         // 生命回复
                                    {15, 0, 0}};        // 法力回复

    set_Attributes(attributes);

    // for(int i = 0; i < N_ATTR; i++){
    //     get_Attribute(i).set(idx2name(i), attributes[i][0], attributes[i][1], attributes[i][2]);
    // }
}


