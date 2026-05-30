#include <cmath>
#include <utility>
#include <iostream>

struct Complex
{
    double  re;
    double  im;

    Complex();
    Complex(double _re, double _im);
};

std::ostream& operator<<(std::ostream &os, const Complex &z);