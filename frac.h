#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
class frac
{
private:
    int numerator;
    int denominator;  
public:
    frac() = delete;
    frac(int _numerator, int _denominator);
    frac(const frac& other);
    int denominator0(int denominator);
    int whole_part(int numerator, int denomirator);
    frac sign();
    frac reduction();
    void printfrac ();
    int getnumerator();
    int getdenominator();
    int getwholepart();
    frac operator+ (const frac &b) const;
    frac operator+ (const int &b) const;
    frac operator- (const frac &b) const;
    frac operator- (const int &b) const;
    frac operator* (const frac &b) const;
    frac operator* (const int &b) const;
    frac operator/ (const frac &b) const;
    frac operator/ (const int &b) const;
};
frac operator+(const int &a, frac &b);
frac operator-(const int &a, frac &b);
frac operator*(const int &a, frac &b);
frac operator/(const int &a, frac &b);