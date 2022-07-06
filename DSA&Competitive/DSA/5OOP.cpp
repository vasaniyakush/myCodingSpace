#include<bits/stdc++.h>
using namespace std;
class vehicle{
    int maxSpeed;
    protected:
    int numTyres;
    public:
    string color;
};
class car : public vehicle{
    public:
    int numGears;
    void print(){
        cout<<"NumTyres : "<<numTyres;
        cout<<"Color : "<<color;
    }
};
int main(){


return 0;
}