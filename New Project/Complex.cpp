#include "Complex.h"

/*Complex:: - scope resolution*/

Complex::Complex(double rr, double ii) : re(rr), im(ii) {}
Complex::Complex(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
}
Complex& Complex::operator=(const Complex& rhs) 
{
    re = rhs.re;
    im = rhs.im;
    return *this;
}
Complex Complex::operator++()
{
    ++re;
    ++im;
    return *this;
}
Complex Complex::operator++(int dummy)
{
    Complex w(re, im);
    ++re; ++im;
    return w;
}
Complex operator+(const Complex& z1, const Complex& z2)
{
    Complex w;
    w.re = z1.re + z2.re;
    w.im = z1.im + z2.im;
    return w;
}