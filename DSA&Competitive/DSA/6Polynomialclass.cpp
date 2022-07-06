#include<bits/stdc++.h>
using namespace std;

class Polynomial
{
    int *dyCoff;
    int maxdegree;
    public:
    Polynomial()
    {
        maxdegree = 5;
        dyCoff = new int[6];
        for (int i = 0; i < maxdegree + 1; i++)
        {
            dyCoff[i] = 0;
        }
        
    }
    
    Polynomial(int degreee)
    {
        maxdegree = degreee;
        dyCoff = new int[maxdegree + 1];
        for (int i = 0; i < maxdegree + 1; i++)
        {
            dyCoff[i] = 0;
        }
    }
    
    Polynomial(Polynomial const &p)
    {
        this -> maxdegree = p.maxdegree;
        this -> dyCoff = new int[maxdegree + 1];
        for (int i = 0; i <= maxdegree; i++)
        {
            this -> dyCoff[i] = p.dyCoff[i];
        }
    }

    void operator=(Polynomial const &p)
    {
        this -> maxdegree = p.maxdegree;
        int *newdyCoff = new int[maxdegree + 1];
        for (int i = 0; i < maxdegree + 1; i++)
        {
            newdyCoff[i] = p.dyCoff[i];
        }
        delete [] dyCoff;
        dyCoff = newdyCoff;
        
    }
    
    void Printp()
    {
        // if (dyCoff[0] != 0)
        // cout<<dyCoff[0]<<"x^"<<0<<" ";
        // bool flag = 0;
        bool flag = 0;

        for (int i = 1; i < maxdegree + 1; i++)
        {
            if (dyCoff[i] != 0 && flag)
            {
                cout<<"+ "<<dyCoff[i]<<"x^"<<i<<" ";
            }
            else if(dyCoff[i] != 0 && !(flag)){
                cout<<dyCoff[i]<<"x^"<<i<<" ";
                flag = true;
            }
        }
            cout<<endl;
    }

    void setCoff(int degreee , int Coff)
    {
        if (degreee > maxdegree)
        {
            int *newdyCoff = new int[degreee + 5];
            for (int i = 0; i < maxdegree + 1; i++)
            {
                newdyCoff[i] = dyCoff[i];
            }
            for (int i = maxdegree + 1; i < degreee + 5; i++)
            {
                newdyCoff[i] = 0;
            }
            
            delete[] dyCoff;
            dyCoff = newdyCoff;
        }
        dyCoff[degreee] = Coff;
        maxdegree = degreee;
    }
    Polynomial operator+(Polynomial const &p)
    {
        int upcappa = max(this -> maxdegree , p.maxdegree);
        //upcappa is The higher degree to be set
        Polynomial pnew(upcappa);
        int locappa = min(this-> maxdegree, p.maxdegree);
        //locappa is the lower degree among both
        int value;
        for (int i = 0; i < locappa + 1; i++)
        {
            value = p.dyCoff[i] + this -> dyCoff[i];
            pnew.setCoff(i,value);
        }
        if (this ->maxdegree == upcappa)
        {
            for (int i = locappa + 1; i < upcappa + 1; i++)
            {
                value = this ->dyCoff[i];
                pnew.setCoff(i,value);
            }
        }
        else if (p.maxdegree == upcappa)
        {
            for (int i = locappa + 1; i < upcappa + 1; i++)
            {
                value = p.dyCoff[i];
                pnew.setCoff(i,value);
            }
        }
        
        return pnew;
        
    }
    Polynomial operator-(Polynomial const &p)
    {
        int upcappa = max(this -> maxdegree , p.maxdegree);
        //upcappa is The higher degree to be set
        Polynomial pnew(upcappa);
        int locappa = min(this-> maxdegree, p.maxdegree);
        //locappa is the lower degree among both
        int value;
        for (int i = 0; i < locappa + 1; i++)
        {
            value =  this -> dyCoff[i] - p.dyCoff[i] ;
            pnew.setCoff(i,value);
        }
        if (this ->maxdegree == upcappa)
        {
            for (int i = locappa + 1; i < upcappa + 1; i++)
            {
                value = this ->dyCoff[i];
                pnew.setCoff(i,value);
            }
        }
        else if (p.maxdegree == upcappa)
        {
            for (int i = locappa + 1; i < upcappa + 1; i++)
            {
                value = p.dyCoff[i];
                pnew.setCoff(i,((-1)*value));
            }
        }
        
        
        return pnew;
        
    }
    Polynomial operator*(Polynomial const &p){
        int upcapp = p.maxdegree * this ->maxdegree;
        Polynomial pnew(upcapp);
        for (int i = 0; i < p.maxdegree + 1 ; i++)
        {
            for (int j = 0; j < this->maxdegree + 1; j++)
            {
                pnew.dyCoff[i+j] += p.dyCoff[i] * this -> dyCoff[j];
            }
            
        }
        return pnew;
        
    }


    ~Polynomial(){
        delete [] dyCoff;
    }

};

int main(){
    Polynomial p1;
    p1.Printp();
    cout<<"hello 1\n";
    p1.setCoff(4,3);
    // p1.Printp();
    p1.setCoff(5,2);
    
    p1.setCoff(6,2);
    
    // p1.setCoff(8,2);

    // p1.setCoff(14,5);
    // p1.Printp();
    // p1.setCoff(16,5);
    p1.Printp();
    Polynomial p2;
    p2 = p1;
    // p2.setCoff(16,8);
    p2.Printp();
    Polynomial p3;
    p3 = p1 - p2;
    p3.Printp();
    Polynomial p4;
    p4 = p1*p2;
    p4.Printp();
    
    cout<<"program ended succesfully";
return 0;
}