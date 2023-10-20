// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class RationalNumber
{
private:
    int a,b;
public:
    int getNumerator() const;
    
    int getDenominator() const;
   
    void setNumerator (const int&numerator);
    
    void setDenominator (const int&denominator);
    
    void print() const;
    
};

int RationalNumber::getNumerator() const
    {
        return a;
    }
int RationalNumber::getDenominator() const
    {
        return b;
    }
void RationalNumber::RationalNumber::setNumerator (const int&numerator)
    {
        a = numerator;
    }
void RationalNumber::setDenominator (const int&denominator)
    {
        b = denominator != 0? denominator: 1;
    }
void RationalNumber::print() const
    { 
        cout << a << '/' << b ;
    }

int main() 
{
    RationalNumber r1;
    r1.setNumerator(3);
    r1.setDenominator(5);
    r1.print();
}