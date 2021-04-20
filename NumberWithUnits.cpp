#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>

using namespace std;
using namespace ariel;

void NumberWithUnits::read_units(std::ifstream &stram)
{
}
// NumberWithUnits NumberWithUnits::operator++()
// {
// }
NumberWithUnits NumberWithUnits::operator-() const
{
    return NumberWithUnits(-_num,_str);
}
NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& nl) const
{
    return NumberWithUnits(_num-nl._num, _str);
}
NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& nl) const
{
    return NumberWithUnits(_num+nl._num, _str);
}
NumberWithUnits ariel::operator*(double x, const NumberWithUnits& nl)
{
   return NumberWithUnits(x*nl._num, nl._str);
}

NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& nl)
{
    _num += nl._num;
    return *this;
}


bool ariel::operator>(const NumberWithUnits &one, const NumberWithUnits &two)
{
    return (one._num>two._num);
}
const float TOLARENCE = 0.001;
bool ariel::operator==(const NumberWithUnits &one, const NumberWithUnits &two)
{
    return (abs(one._num-two._num)<TOLARENCE);
}
bool ariel::operator<=(const NumberWithUnits &one, const NumberWithUnits &two)
{
    return ((abs(one._num-two._num)<TOLARENCE)||(one._num<two._num));
}
bool ariel::operator!=(const NumberWithUnits &one, const NumberWithUnits &two)
{
    return (!(one==two));
}



ostream& ariel::operator<< (ostream& os, const NumberWithUnits& nl)
{
    // os << nl.number << nl.str;
    return os;
}
istream &ariel::operator>>(istream &os, const NumberWithUnits& nl)
{
    return os;
}