#pragma once
#include <string>
#include <iostream>  // 必须包含此头文件
#include <utility>   // 为了std::move

struct AttributeValue {
    // 成员变量（默认public）
    std::string equipmentName;
    double gamePoints = 0;
    double AD = 0;
    double AP = 0;
    double HP = 0;
    double MP = 0;
    double PD = 0;
    double MD = 0;
    double CD = 0;
    double extraMS = 0;
    double extraDamage = 0;
    double extraAD = 0;
    double extraAP = 0;

    // 构造函数
    explicit AttributeValue(
        std::string name = "",
        double gp = 0,
        double ad = 0,
        double ap = 0,
        double hp = 0,
        double mp = 0,
        double pd = 0,
        double md = 0,
        double cd = 0,
        double ms = 0,
        double exDmg = 0,
        double exAD = 0,
        double exAP = 0
    ) : equipmentName(std::move(name)),
        gamePoints(gp),
        AD(ad),
        AP(ap),
        HP(hp),
        MP(mp),
        PD(pd),
        MD(md),
        CD(cd),
        extraMS(ms),
        extraDamage(exDmg),
        extraAD(exAD),
        extraAP(exAP) {
    }

    // 修复后的流输出运算符（确保在全局作用域声明）
    friend std::ostream& operator<<(std::ostream& os, const AttributeValue& av);
};

// 流输出运算符的全局定义（必须放在结构体外部）
inline std::ostream& operator<<(std::ostream& os, const AttributeValue& av) {
    os << "[" << av.equipmentName << "]\n"
        << "AD: " << av.AD << "\tAP: " << av.AP << "\n"
        << "HP: " << av.HP << "\tMP: " << av.MP << "\n"
        << "金币: " << av.gamePoints;
    return os;
}