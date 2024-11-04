#pragma once
#include <iostream>
#include <string>
#include <cstring>

class frac
{
private:
    int numerator;
    int denominator;  
public:
    frac() = delete;
    frac(int _numerator, int _denominator) 
    {
        this->numerator = _numerator;
        this->denominator = _denominator;
        this->reduction();
    }
    frac(const frac& other)
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
    int whole_part(int numerator, int denomirator)
    {
        return (numerator / denominator);
    }
    frac sign()
    {
        
    }
    frac reduction()
    {
        int numerator1 = numerator;
        int denominator1 = denominator;
        while ((numerator1 != denominator1) && (numerator1 != 0) && (numerator1 != 1))
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
        return frac(numerator, denominator);
    }
    int getnumerator()
    {
        return numerator;
    }
    int getdenominator()
    {
        return denominator;
    }
    int getwholepart()
    {
        return (numerator / denominator);
    }
    frac operator+(const frac &b) const 
    { 
        frac a = frac(numerator * b.denominator + b.numerator * denominator, denominator * b.denominator);
        return a.reduction();
    }
    frac operator+(const int &b) const
    {
        frac a = frac(numerator + denominator * b, denominator);
        return a.reduction();
    }
};