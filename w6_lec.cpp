// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class RationalNumber
{
private:
    int a,b;
public:
    void rationalNumber();
    void rationalNumber(const int & a, const int &b);
    void reduce();
    void standardize();
    int getNumerator() const;
    
    int getDenominator() const;
   
    void setNumerator (const int&numerator);
    
    void setDenominator (const int&denominator);
    
    void print() const;
    
};

void RationalNumber::rationalNumber()
{
    this-> a = 0;
    this-> b = 1;
}

void RationalNumber::rationalNumber(const int &a, const int &b)
{
    this-> a = a;
    this-> b = b != 0? b:1;
    standardize();
    reduce();
}

void RationalNumber::reduce()
{
    if (this->a ==0)
    {
        this->b = 1;
    }
    else
    {
        int m = abs(this-> a), n = abs(this->b);
        int gcd = m<n? m:n;
        while (m%gcd!=0 || n%gcd!=0)
            gcd--;
        this->a /=gcd;
        this->b /= gcd;
    }
}

void RationalNumber::standardize()
{
    if (this->b < 0)
    {
        this->a *=-1;
        this->b *=-1;

    }
}

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
        this->a = numerator;
    }
void RationalNumber::setDenominator (const int&denominator)
    {
        this->b = denominator != 0? denominator: 1;
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