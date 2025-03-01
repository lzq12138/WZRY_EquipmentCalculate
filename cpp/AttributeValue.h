#pragma once
#include <string>
#include <iostream>  // ���������ͷ�ļ�
#include <utility>   // Ϊ��std::move

struct AttributeValue {
    // ��Ա������Ĭ��public��
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

    // ���캯��
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

    // �޸����������������ȷ����ȫ��������������
    friend std::ostream& operator<<(std::ostream& os, const AttributeValue& av);
};

// ������������ȫ�ֶ��壨������ڽṹ���ⲿ��
inline std::ostream& operator<<(std::ostream& os, const AttributeValue& av) {
    os << "[" << av.equipmentName << "]\n"
        << "AD: " << av.AD << "\tAP: " << av.AP << "\n"
        << "HP: " << av.HP << "\tMP: " << av.MP << "\n"
        << "���: " << av.gamePoints;
    return os;
}