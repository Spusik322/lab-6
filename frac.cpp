#include "frac.h"
frac::frac(int _numerator, int _denominator)
{
    this->numerator = _numerator;
    _denominator = denominator0(_denominator);
    this->denominator = _denominator;
    this->sign();
    this->reduction();
}
frac::frac(const frac& other)
{   
    this->numerator = other.numerator;
    this->denominator = other.denominator;
}
int frac::denominator0(int denominator)
{
    while(denominator == 0)
    {
    std::cout << "Знаменатель не может быть равен 0" << std::endl;
    std::cin >> denominator;
    }
    return denominator;
}
int frac::whole_part(int numerator, int denomirator)
{
    return (numerator / denominator);
}
frac frac::sign()
{
    if ((numerator * denominator < 0))
    {
        numerator = -abs(numerator);
        denominator = abs(denominator);
        return *this;
    }
    numerator = abs(numerator);
    denominator = abs(denominator);
    return *this;
}
frac frac::reduction()
{
    if (numerator != 0)
    {
    int numerator1 = abs(numerator);
    int denominator1 = abs(denominator);
    while (numerator1 != denominator1)
    {
        if (numerator1 > denominator1)
        {
            numerator1 -= denominator1;
        } 
        else
        {
            denominator1 -= numerator1;
        }
    }
    numerator = numerator / numerator1;
    denominator = denominator / denominator1;
    }
    return *this;
}
void frac::printfrac ()
{
    if (numerator == 0)
    {
        std::cout << 0 << std::endl;
    }
    if (denominator == 1)
    {
        std::cout << numerator << std::endl;
    }
    if ((numerator != 0) && (denominator != 1))
    {
        if (whole_part(numerator, denominator) == 0)
        {
            std::cout << numerator << "/" << denominator;
        }
        else
        {
            std::cout << whole_part(numerator, denominator) << " and " << (abs(numerator) % denominator) << "/" << denominator;
        }
    }
}
int frac::getnumerator()
{   
    return numerator;
}
int frac::getdenominator()
{
    return denominator;
}
int frac::getwholepart()
{
    return (numerator / denominator);
}
frac frac::operator+ (const frac &b) const 
{ 
    frac a = frac(numerator * b.denominator + b.numerator * denominator, denominator * b.denominator);
    return a.reduction();
}
frac frac::operator+ (const int &b) const
{
    frac a = frac(numerator + denominator * b, denominator);
    return a.reduction();
}
frac frac::operator- (const frac &b) const
{
    frac a = frac(numerator * b.denominator - b.numerator * denominator, denominator * b.denominator);
    return a.reduction();
}
frac frac::operator- (const int &b) const
{
    frac a = frac(numerator - denominator * b, denominator);
    return a.reduction();
}
frac frac::operator* (const frac &b) const
{
    frac a = frac(numerator * b.numerator, denominator * b.denominator);
    return a.reduction();
}
frac frac::operator* (const int &b) const
{
    frac a = frac(numerator * b, denominator);
    return a.reduction();
}
frac frac::operator/ (const frac &b) const
{
    frac a = frac(numerator * b.denominator, denominator * b.numerator);
    return a.reduction();
}
frac frac::operator/ (const int &b) const
{
    frac a = frac(numerator, denominator * b);
    return a.reduction();
}
frac operator+(const int &a, frac &b)
{
    frac c = frac(b.getnumerator() + b.getdenominator() * a, b.getdenominator());
    return c.reduction();
}
frac operator-(const int &a, frac &b)
{
    frac c = frac(b.getdenominator() * a - b.getnumerator(), b.getdenominator());
    return c.reduction();
}
frac operator*(const int &a, frac &b)
{
    frac c = frac(b.getnumerator() * a, b.getdenominator());
    return c.reduction();
}
frac operator/(const int &a, frac &b)
{
    frac c = frac(b.getdenominator() * a, b.getnumerator());
    return c.reduction();
}