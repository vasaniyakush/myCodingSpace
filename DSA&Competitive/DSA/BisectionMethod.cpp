#include<bits/stdc++.h>
using namespace std;
#define ep 0.0001

double func(double x){
    return (x*pow(exp(1),x) - 3*x - 2);
}

void bisection(double a,double b){
    double c = a;
    while (b - a > ep)
    {
        c = (a + b)/2;
        if (func(c) == 0)
        {
            break;
        }
        else if(func(c)*func(a) < 0){
            b = c;
        }
        else a = c;
        
    }
    cout<<c;
    
    
}

int main(){
    bisection(0,100);

return 0;
}