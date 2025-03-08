#include <string>

#ifndef AttributeValue_H
#define AttributeValue_H
#define HP 0            // Health Point
#define MP 1            // Magic Point
#define AD 2            // Attack Damage
#define AP 3            // Attack Power
#define PD 4            // Physical Defense
#define MD 5            // Magical Defense
#define MS 6            // Movement Speed
#define PPen 7          // Physical Penetration
#define MPen 8          // Magical Penetration
#define AS 9            // Attack Speed
#define CR 10           // Critical Rate
#define CD 11           // Critical Damage  
#define LS 12           // Life Steal
#define SV 13           // Spell Vamp
#define CDR 14          // Cooldown Reduction
#define Tenacity 15     // Tenacity
#define HReg 16         // Health Regeneration
#define MReg 17         // Magic Regeneration
#endif

// Class for one attribute
class AttributeValue{

    public:
    AttributeValue(std::string name="", double value1=0.0, double value2=0.0, double value3=0.0);

    std::string get_name();
    void set_name(std::string name);
    double get_Value();
    void set_Value(double value);
    double get_extraValue();
    void set_extraValue(double value);
    double get_percentageValue();
    void set_persentageValue(double value);

    // Set all values
    void set(std::string name="", double value1=0.0, double value2=0.0, double value3=0.0);

    private:
    std::string m_name;         // name of atteibute
    double m_value;             // basic value
    double m_extraValue;        // extra value
    double m_percentageValue;   // percentage value

};