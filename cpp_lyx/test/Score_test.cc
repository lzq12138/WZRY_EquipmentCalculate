#include <iostream>

#include "base/EquipmentModelBase.h"
#include "EquipmentModels/GongJi_LV1.h"

using namespace std;

int main(){
    int n = 7;

    EquipmentModelBase *equipment_container[n]; 

    equipment_container[0] = new TieJian();
    equipment_container[1] = new BiShou();
    equipment_container[2] = new BoJiQuanTao();
    equipment_container[3] = new XiXueZhiLian();
    equipment_container[4] = new XunJieChangMao();
    equipment_container[5] = new LeiMingRen();
    equipment_container[6] = new ChongNengQuanTao();

    for(int i = 0; i < n; i++){
        EquipmentModelBase *a = equipment_container[i];
        cout << "Score of equipment " << a->get_name() << " is: " << a->get_Score() << endl;
    }

    for(int i = 0; i < n; i++){
        delete equipment_container[i];
    }
    // delete[] equipment_container;
    return 0;
}