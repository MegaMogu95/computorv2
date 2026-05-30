#include "complex.hpp"

Complex::Complex():
    re(0),
    im(0)
{
}

Complex::Complex(double _re, double _im):
    re(_re),
    im(_im)
{
}

std::ostream& operator<<(std::ostream &os, const Complex &z)
{
    if (z.re != 0)
    {
        os << z.re;
        if (z.im > 0)
            os << " + " << z.im << "i";
        else if (z.im < 0)
            os << " - " << -z.im << "i";
    }
    else
    {
        os << z.im;
        if (z.im != 0)
            os << "i";
    }
    return (os);
}