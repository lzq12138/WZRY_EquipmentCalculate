class AttributeValue{

    public:
    AttributeValue(double value1=0.0, double value2=0.0);

    double get_Value();
    void set_Value(double value);
    double get_extraValue();
    void set_extraValue(double value);

    private:
    double m_value;
    double m_extraValue;

};