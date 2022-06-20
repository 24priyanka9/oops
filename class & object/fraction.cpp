#include<bits/stdc++.h>
using namespace std;
class fraction{
    int numerator,denominator;
    public:
    fraction(int n,int d){
        numerator=n;
        denominator=d;
    }
    fraction(){
    }
    void simplify(){
        int g;
        g=__gcd(numerator,denominator);
        numerator=numerator/g;
        denominator=denominator/g;
    }
    void operator + (fraction &f1){
        fraction f3;
     f3.numerator=numerator*(f1.denominator)+(f1.numerator)*denominator;
     f3.denominator=denominator*(f1.denominator);
     f3.simplify();
     //int gcd=__gcd(f3.numerator,f3.denominator);
     cout<<f3.numerator<<"/"<<f3.denominator;
    }
    void add_fraction(fraction &f1,fraction &f2){
        fraction f3;
        denominator=f1.denominator*f2.denominator;
        numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
        simplify();
        cout<<numerator<<"/"<<denominator;
    }
};
int main(){
    fraction f1(1,2),f2(3,4);
    f1+f2;
    //f3.add_fraction(f1,f2);

    return 0;
}