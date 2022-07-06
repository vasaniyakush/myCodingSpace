// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// class Person{
//     public:
    
//     string name;
//     int age;
//     virtual void getdata(){

//     }
//     virtual void putdata(){

//     }
// };

// class Professor:public Person{
//     public:
//     static int countP;
//     Professor(){
//         cur_id = countP++;
//     }
    
//     int  publications, cur_id ;
//     void getdata(){
//         cin>>name;
//         cin>>age;
//         cin>>publications;
//     }
//     void putdata(){
//         cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
//     }
// };
// int Professor::countP = 1;
// class Student : public Person{
//     public:
//     static int countS;
//     int marks[6], cur_id , total = 0;
//     Student(){
//         cur_id = countS++;
//     }
//     void getdata(){
//         cin>>name>>age;
//         int n = 0;
//         while(n < 6){
//             cin>>marks[n];
//             total += marks[n];
//             n++;
//         }
        
//     }
//     void putdata(){
//         cout<<name<<" "<<age<<" "<<total<<" "<<cur_id<<endl; 
//     }
// };
// int Student::countS = 1;
// int main(){

//     int n, val;
//     cin>>n; //The number of objects that is going to be created.
//     Person *per[n];

//     for(int i = 0;i < n;i++){

//         cin>>val;
//         if(val == 1){
//             // If val is 1 current object is of type Professor
//             per[i] = new Professor;

//         }
//         else per[i] = new Student; // Else the current object is of type Student

//         per[i]->getdata(); // Get the data from the user.

//     }

//     for(int i=0;i<n;i++)
//         per[i]->putdata(); // Print the required output for each object.

//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 1;
    int count = 0;
    while (x++ < 100)
    {
        count ++;
        x *= x;
        if(x <10 ) continue;
        if (x>50) break;
    }
    cout<<count;
    
return 0;
}