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
int denominator0(int denominator) 
{
    while(denominator == 0){
        std::cout << "Знаменатель не может быть равен 0" << std::endl;
        std::cin >> denominator;
    }
    return denominator;
}