#include <iostream>

namespace ariel
{

    class NumberWithUnits
    {
    public:
        double _num;
        std::string _str;
        // NumberWithUnits(int number, std::string str)
        // {
        //     this->number = number;
        //     this->str = str;
        // };
        NumberWithUnits(const double &num, const std::string &str) : _num(num), _str(str) {}

        int num() const
        {
            return _num;
        }
        std::string str() const
        {
            return _str;
        }
        static void read_units(std::ifstream &stram);
        NumberWithUnits operator-() const;
        NumberWithUnits operator-(const NumberWithUnits &nl) const;
        NumberWithUnits operator+(const NumberWithUnits &nl) const;
        friend NumberWithUnits operator*(double x, const NumberWithUnits &nl);

        // NumberWithUnits operator++();

        NumberWithUnits &operator+=(const NumberWithUnits &nl);

        friend bool operator>(const NumberWithUnits &one, const NumberWithUnits &two);
        friend bool operator==(const NumberWithUnits &one, const NumberWithUnits &two);
        friend bool operator<=(const NumberWithUnits &one, const NumberWithUnits &two);
        friend bool operator!=(const NumberWithUnits &one, const NumberWithUnits &two);

        friend std::ostream &operator<<(std::ostream &os, const NumberWithUnits &nl);
        friend std::istream &operator>>(std::istream &os, const NumberWithUnits &nl);
    };

}