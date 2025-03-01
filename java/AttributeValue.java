public class AttributeValue {
    private String equipmentName;
    private double gamePoints; //金币

    private double AD; //物理攻击
    private double AP; //法术攻击
    private double HP; //血量
    private double MP; //蓝条-MagicPoint
    private double PD; //物理防御-PhysicalDefense
    private double MD; //物理防御-MagicalDefense

    private double CD; //冷却
    private double extraMS; //移速-MovementSpeed

    private double extraDamage; //额外伤害
    private double extraAD;//额外AD
    private double extraAP;//额外AP

    public AttributeValue(String equipmentName, double gamePoints, double AD, double AP,
                          double HP, double MP, double PD, double MD, double CD, double extraMS,
                          double extraDamage, double extraAD, double extraAP) {
        this.equipmentName = equipmentName;
        this.gamePoints = gamePoints;
        this.AD = AD;
        this.AP = AP;
        this.HP = HP;
        this.MP = MP;
        this.PD = PD;
        this.MD = MD;
        this.CD = CD;
        this.extraMS = extraMS;
        this.extraDamage = extraDamage;
        this.extraAD = extraAD;
        this.extraAP = extraAP;
    }

    public String getEquipmentName() {
        return equipmentName;
    }

    public void setEquipmentName(String equipmentName) {
        this.equipmentName = equipmentName;
    }

    public double getGamePoints() {
        return gamePoints;
    }

    public void setGamePoints(double gamePoints) {
        this.gamePoints = gamePoints;
    }

    public double getAD() {
        return AD;
    }

    public void setAD(double AD) {
        this.AD = AD;
    }

    public double getAP() {
        return AP;
    }

    public void setAP(double AP) {
        this.AP = AP;
    }

    public double getHP() {
        return HP;
    }

    public void setHP(double HP) {
        this.HP = HP;
    }

    public double getMP() {
        return MP;
    }

    public void setMP(double MP) {
        this.MP = MP;
    }

    public double getPD() {
        return PD;
    }

    public void setPD(double PD) {
        this.PD = PD;
    }

    public double getMD() {
        return MD;
    }

    public void setMD(double MD) {
        this.MD = MD;
    }

    public double getCD() {
        return CD;
    }

    public void setCD(double CD) {
        this.CD = CD;
    }

    public double getExtraMS() {
        return extraMS;
    }

    public void setExtraMS(double extraMS) {
        this.extraMS = extraMS;
    }

    public double getExtraDamage() {
        return extraDamage;
    }

    public void setExtraDamage(double extraDamage) {
        this.extraDamage = extraDamage;
    }

    public double getExtraAD() {
        return extraAD;
    }

    public void setExtraAD(double extraAD) {
        this.extraAD = extraAD;
    }

    public double getExtraAP() {
        return extraAP;
    }

    public void setExtraAP(double extraAP) {
        this.extraAP = extraAP;
    }
}

