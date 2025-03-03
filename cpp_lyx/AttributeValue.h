#include <string>
// using namespace std;

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

    private:
    std::string m_name;         // name of atteibute
    double m_value;             // basic value
    double m_extraValue;        // extra value
    double m_percentageValue;   // percentage value

};