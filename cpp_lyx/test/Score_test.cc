#include <iostream>

#include "base/EquipmentModelBase.h"
#include "base/AttributeValue.h"
#include "EquipmentModels/GongJi_LV1.h"
#include "EquipmentModels/GongJi_LV2.h"
#include "EquipmentModels/GongJi_LV3.h"

using namespace std;

int main(){
    int n = 33;

    EquipmentModelBase *equipment_container[n]; 

    equipment_container[0] = new TieJian();
    equipment_container[1] = new BiShou();
    equipment_container[2] = new BoJiQuanTao();
    equipment_container[3] = new XiXueZhiLian();
    equipment_container[4] = new XunJieChangMao();
    equipment_container[5] = new LeiMingRen();
    equipment_container[6] = new ChongNengQuanTao();

    equipment_container[7] = new FengBaoJuJian();
    equipment_container[8] = new RiMian();
    equipment_container[9] = new KuangBaoShuangRen();
    equipment_container[10] = new YunXing();
    equipment_container[11] = new SuJiZhiQiang();
    equipment_container[12] = new XueHunRen();
    equipment_container[13] = new ChuanYunGong();
    equipment_container[14] = new MingDaoSiMing();
    equipment_container[15] = new SuiXingChui();
    equipment_container[16] = new PoMoDao();
    equipment_container[17] = new HanShuangQinXi();
    equipment_container[18] = new ZhiCaiZhiRen();
    equipment_container[19] = new ChunJingCangQiong();

    equipment_container[20] = new MoShi();
    equipment_container[21] = new QiXueZhiRen();
    equipment_container[22] = new WuJinZhanRen();
    equipment_container[23] = new ZongShiZhiLi();
    equipment_container[24] = new ShanDianBiShou();
    equipment_container[25] = new YingRen();
    equipment_container[26] = new AnYingZhanFu();
    equipment_container[27] = new QiangZhePoJun();
    equipment_container[28] = new ZhuRiZhiGong();
    equipment_container[29] = new RenZhePoXiao();
    equipment_container[30] = new ZhuFeng();
    equipment_container[31] = new XunJiRiYuan();
    equipment_container[32] = new BuDongTianQiong();


    for(int i = 0; i < n; i++){
        EquipmentModelBase *equipment_ptr = equipment_container[i];
        cout << "Score of equipment " << equipment_ptr->get_name() << " is: " << equipment_ptr->get_Score() << endl;
        for(int j = 0; j < equipment_ptr->get_NAttributes(); j++){
            AttributeValue attribute = equipment_ptr->get_Attribute_from_list(j);
            double value = attribute.get_extraValue();
            double percentage_value = attribute.get_percentageValue();
            cout << "Attribute " << attribute.get_name() << ": " << value << ", " << percentage_value << "%" << std::endl;
            double value_factor = base_factor_from_idx(name2idx(attribute.get_name()));
            double percentage_value_factor = percentage_factor_from_idx(name2idx(attribute.get_name()));
            if(value != 0 && value_factor == 0){
                cout << "base factor not set!" << std::endl;
            }
            if(percentage_value != 0 && percentage_value_factor == 0){
                cout << "Percentage factor not set!" << std::endl;
            }
        }
    }

    for(int i = 0; i < n; i++){
        delete equipment_container[i];
    }
    // delete[] equipment_container;
    return 0;
}