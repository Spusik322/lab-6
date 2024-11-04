#include <iostream>
#include "frac.h"

using namespace std;
int denominator0(int denominator) 
    {
        while(denominator == 0){
            std::cout << "Знаменатель не может быть равен 0";
            std::cin >> denominator;
        }
        return denominator;
    }
int main()
{
    cout << denominator0(585);
    return 0;
}