#include "LBQH.h"

LBQH::LBQH() : HeroModelBase("鲁班七号"){
    set_AttackRange("远程");
    
    double attributes[N_ATTR][3] = {{3366, 0, 0},
                                    {440, 0, 0},
                                    {174, 0, 0},
                                    {0, 0, 0},
                                    {150, 0, 20},
                                    {75, 0, 11.1},
                                    {370, 0, 0},
                                    {0, 0, 0},
                                    {0, 0, 0},
                                    {0, 10, 0},
                                    {0, 0, 0},
                                    {0, 200, 0},
                                    {0, 0, 0},
                                    {0, 0, 0},
                                    {0, 0, 0},
                                    {0, 0, 0},
                                    {42, 0, 0},
                                    {15, 0, 0}};

    for(int i = 0; i <= N_ATTR; i++){
        get_Attribute(i).set(name(i), attributes[i][0], attributes[i][1], attributes[i][2]);
    }

    // get_Attribute(HP).set("生命值", 3366, 0, 0);
    // get_Attribute(MP).set("法力值", 440, 0, 0);
    // get_Attribute(AD).set("物理攻击", 174, 0, 0);
    // get_Attribute(AP).set("法术攻击", 0, 0, 0);
    // get_Attribute(PD).set("物理防御", 150, 0, 20);
    // get_Attribute(MD).set("法术防御", 75, 0, 11.1);
    
    // get_Attribute(MS).set("移动速度", 370, 0, 0);
    // get_Attribute(PPen).set("物理穿透", 0, 0, 0);
    // get_Attribute(MPen).set("法术穿透", 0, 0, 0);
    // get_Attribute(AS).set("攻击速度", 0, 10, 0);
    // get_Attribute(CR).set("暴击率", 0, 0, 0);
    // get_Attribute(CD).set("暴击伤害", 0, 200, 0);
    // get_Attribute(LS).set("物理吸血", 0, 0, 0);
    // get_Attribute(SV).set("法术吸血", 0, 0, 0);
    // get_Attribute(CDR).set("冷却缩减", 0, 0, 0);

    // get_Attribute(Tenacity).set("韧性", 0, 0, 0);
    // get_Attribute(HReg).set("生命回复", 42, 0, 0);
    // get_Attribute(MReg).set("法力回复", 15, 0, 0);

}


