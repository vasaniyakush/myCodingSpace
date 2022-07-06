#include<bits/stdc++.h>
using namespace std;
#include "6Fraction.cpp"

int main(){
    Fraction f1(1,2), f2(1,2);
    Fraction f3;
    // f1.print();
    // f2.print();
    // // f1.add(f2);
    // // f1.print();
    // f3 = f1.addf(f2);
    // f3.print();
    // Fraction f4;
    // f4 = f1 + f2;
    // f4.print();
    // Fraction f5;
    // f5 = f1 * f2;
    // f5.print();
    // cout<<"hello";
    (f1 += f2);
    f1.print();
    
    
return 0;
}