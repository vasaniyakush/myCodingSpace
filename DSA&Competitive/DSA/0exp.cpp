

// int main(){

//     // int a = 10;
 
//     // int *aptr = &a;
 
//     // cout<<"Value at "<<aptr<<" is "<<*aptr<<endl;

//     // int **ptrptr = &aptr;
//     // cout<<"Value at "<<ptrptr<<" is "<<*ptrptr <<" where the value is "<<**ptrptr;

//     // int ar[10];

//     // cout<<"size of array "<<sizeof(ar); 
//     // int *ptr = ar;
//     // cout<<"size of ptr "<<sizeof(ptr);

//     // char a[] = "hello";
//     // char *ptr = a;

//     // cout<<ptr;
    

// }
// #include <iostream>
// #include <string>
// #include <iomanip>

// using namespace std;
// int main(){

//     string str = "hello";
//     ;
//     return 0;
// }
// #include <bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int *arr = new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int *pref = new int[n];
//         int *suff = new int[n];
//         pref[0] = arr[0];
//         suff[n - 1] = arr[n - 1];
//         for (int i = 1; i < n; i++)
//         {
//             pref[i] = __gcd(pref[i - 1], arr[i]);
//             // cout << pref[i] << " ";
//         }
//         // for (size_t i = 0; i < n; i++)
//         // {
//         //     cout << pref[i] << " ";
//         // }
//         // cout << endl;
//         for (int i = n - 2; i >= 0; i--)
//         {
//             suff[i] = __gcd(suff[i + 1], arr[i]);
//         }
//         // for (size_t i = 0; i < n; i++)
//         // {
//         //     cout << suff[i] << " ";
//         // }
//         ll sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//         int min = INT_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             int gcd;
//             if (i == 0)
//                 gcd = suff[1];
//             if (i == n - 1)
//                 gcd = pref[i - 1];
//             gcd = __gcd(pref[i - 1], suff[i + 1]);
//             // cout << gcd << "\n";1
//             ll deno = 1 + (sum - arr[i]) / gcd;
//             if (deno < min)
//                 min = deno;
//         }
//         cout << min << endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Fraction
// {
// private:
//     int numerator;
//     int denominator;
// public:
//     Fraction(){

//     }
//     Fraction(int numerator, int denominator) {
//         this ->numerator = numerator;
//         this ->denominator = denominator;

//     }
//     void print(){
//         cout<<numerator<<" / "<<denominator<<endl;
//     }
//     void simplify(){
//         int gcd = 1;
//         int j = min(this -> numerator, this -> denominator);
//         for (int i = 0; i <= j; i++)
//         {
//             if (this ->  numerator % i == 0 && this -> denominator % i == 0 )
//             {
//                 gcd = i;
//             }
//         }
//         this -> numerator /= gcd;
//         this -> denominator /= gcd;
        
//     }

//     Fraction add(Fraction const &f){
//         int lcm =  denominator * f.denominator;
//         int x = lcm / denominator;
//         int y = lcm / f.denominator;

//         int num = x * numerator + (y * f.numerator);

//         //numerator = num;
//         //denominator = lcm;
//         Fraction fNew(num,lcm);
//         fNew.simplify();
//         return fNew;

//     }
//     void multiply(Fraction const &f2){
//         numerator = numerator * f2.numerator;
//         denominator = denominator * f2.denominator;

//         simplify();
//     }
// };

// int main(){
//     Fraction f1(1,2), f2(3,4);
//     Fraction f3;
//     f3 = f1.add(f2);
//     f3.print();
//     cout<<"hello";
    
// return 0;
// }
//CHECK IF ARRAY HAVE ONLY UNIQUE ELEMENTS OR NOT IF ARRAY  IS IN SORTED FORM

// #include<iostream>

// using namespace std;

// void selectionSort(int a[], int n) {
//    int i, j, min, temp;
//    for (i = 0; i < n - 1; i++) {
//       min = i;   //in loop considering first i is smallest value
//       for (j = i + 1; j < n; j++)   //another loop to check next number after i 
//       if (a[j] < a[min])   //now checking largest number between next number and i 
//       min = j;   //assuming j is smallest value
//       temp = a[i];   
//       a[i] = a[min];
//       a[min] = temp;
//    }
// }
// void unique(int a[], int n)
// {
//    // Pick all elements one by one
//     for (int i=0; i<n; i++)
//     {
        
//         int j; //random element 
//         for (j=0; j<i; j++) // now check if it repeats itself 
//            if (a[i] == a[j])
//                break;
  
//         // If not printed earlier, then print it
//         if (i == j)
//           cout << a[i] << " ";
//     }
// }

// int main(){
//    int n;
//    cout<<"Enter number of element: ";
//    cin>>n;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//       cout<<i<<". ";
//       cin>>a[i];

//    }
//    selectionSort(a, n);
//    cout<<"sorted array: "<<endl;
//    for (int i = 0; i < n; i++)
//    {
      
//       cout<<a[i]<<" ";
//    }
//    cout<<"Unique array: ";
//    unique(a, n);
// //    cout<<unique<<" ";
   
//    return(0);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7] = { 6,4,5,2,3,1,7};
//    sort(arr,arr + 6);
//    for (int i = 0; i < 7; i++)
//    {
//       cout<<arr[i];
//    }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x = 0;//anything except 0 is true // NULL = 0; nullptr = 0 pointer
//    char *p = NULL; //NULL = 0;
//    // cout<<p<<endl;
//    int *p2 = nullptr;
//    //if(p2)
//    //if(p)
//    //if(0)
//    //if(false)

   
   
// return 0;
// }
// 1 2 3 4 5 6 7
// #include<stdio.h>
// #include <cmath>
// #define SI(p,n,r) float si; si = p*n*r/100;
// using namespace std;
// int main(){
//     // int num = 112334;
//     // int numOfDigits = log10(num);
//     float p = 2500, r = 3.5 , a;
//     int n = 3;
//     a = SI(p, n, r); 
//     SI(1500,2, 2.5);
//     printf("%d",a);

// return 0;
// }
// #include
// enum bix{
//     a=1,b,c
// };
// int main(){
//     int x= c;
//     int &y = x;
//     int &z=x;
//     y = b;
//     cout<<z--;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int s[] = {1,2,3,4,5,6};
//     int* cp = s;
//     for(int j = 0; j < 6; cp++ , j++){
//         cout<<cp<<endl;
//     }
        
//         int i = (cp - s);
//         cout<<cp<<endl;
//         cout<<s<<endl;
    
//     cout<<s - (s + 2);
// return 0;
// }
// #include<iostream>
// using namespace std;

// class node
// {
//     public :
//         int data ;
//         node *next;
// };
// void append(int key , node **head)
// {
//     node *temp = *head;
//     node *newnode = new node;
//     newnode -> data = key;
//     newnode -> next = nullptr;
//     if (*head == nullptr)
//     {
//         *head = newnode;
//     }
//     else
//     {
//         while(temp-> next != nullptr)
//         {
//             temp = temp->next;
//         }
//         temp -> next = newnode;
//     }
// }
// void print(node ** head)
// {
//     node *temp = *head;
//     while (temp != nullptr)
//     {
//         cout << temp -> data <<" ";
//         temp = temp -> next;
//     }
// }
// int main()
// {
//     node* head = nullptr;
//     append(1,  &head);
//     append(2,  &head);
//     append(3,  &head);
//     print(&head);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//         int data;
//         node *next;
//         node *prev;
// };
// void insert_beginning(node **head , int key)
// {
//     node * temp = *head;
//     node *newnode = new node;
//     newnode-> data = key;
//     newnode-> next = nullptr;
//     newnode-> prev = nullptr;
//     if(temp == nullptr)
//     {
//         *head = newnode;
//         newnode-> next = *head ;
//         newnode-> prev = newnode; 
//     }
//     else
//     {
//         while (temp-> next != *head)
//         {
//             temp = temp -> next;
//         }
//         temp-> next = newnode;
//         newnode->prev = temp;
//         newnode-> next = *head;
//         (*head)-> prev = newnode;
//         *head = newnode;
//     }
// }

// void push_end(node **head , int key)      // insert at the position of i 
// {
//     node *temp = (*head)->prev;
//     node *newnode = new node;
//     newnode-> data = key;
//     newnode-> next = nullptr;
//     newnode-> prev = nullptr;
//     if(temp == nullptr)
//     {
//         *head = newnode;
//         newnode-> next = newnode ;
//         newnode-> prev = newnode;    
//     }
//     else 
//     {
//         newnode-> next = *head;
//         temp->next  = newnode;
//         newnode-> prev = temp;
//         (*head)->prev = newnode;
//     }
// }

// void push_i(node **head , int key , int pos)
// {
//     node *temp = *head;
//     node *newnode = new node;
//     newnode-> data = key;
//     newnode-> next = nullptr;
//     newnode-> prev = nullptr;
//     int count = 0;
//     if(temp == nullptr && pos==0)
//     {
//         *head = newnode;
//         newnode-> next = newnode; 
//         newnode-> prev = newnode;
//     }
//     else
//     {
//         while(count < pos  && temp->next != *head)
//         {
//             temp = temp-> next;
//             count++;
//         }
//         newnode -> next = temp;
//         temp -> prev -> next = newnode;
//         temp -> prev = newnode;
//         newnode -> prev = temp -> prev;
//         if(pos == 0 )
//         {
//             *head = newnode;
//         }
//     }
// }
// void display(node *head)
// {
//     node *temp = head;
//     // cout << temp -> data << " ";
//     // temp = temp-> next;
//     // while(temp != head)
//     // {
//     //     cout << temp->data << " ";
//     //     temp = temp-> next;
//     // }
//      do
//     {
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     } while (temp != head);
//     cout<<endl;
// }
// int main(){
//     node *head = nullptr;
//     insert_beginning(&head , 1);
//     insert_beginning(&head , 2);
//     insert_beginning(&head , 3);
//     // display( head);
//     // cout << endl;

//     push_end(&head , 7);
//     push_end(&head , 8);
//     // display( head);
//     // cout << endl;

//     push_i(&head , 4 , 1);
//     // display( head);
//     // cout << endl;

//     push_i(&head , 9 , 0);
//     display( head);
//     // cout << endl;
    
//     // push_i(&head , 5 , 2);
//     display( head);
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define EPSILON 0.01
 
// double func(double x)
// {
//     return x*x*x - x*x + 2;
//     // return x*pow(3 , x) - 3*x - 2;
// }
 
// void bisection(double a, double b)
// {
//     if (func(a) * func(b) >= 0)
//     {
//         cout << "You have not assumed right a and b\n";
//         return;
//     }
 
//     double c = a;
//     while ((b-a) >= EPSILON)
//     {
//         // Find middle point
//         c = (a+b)/2;
 
//         if (func(c) == 0.0)
//             break;
 
//         else if (func(c)*func(a) < 0)
//             b = c;
//         else
//             a = c;
//     }
//     cout << "The value of root is : " << c;
// }

// int main(){
//     double a , b ;
//     cout << "a or b any one should be negative and other positive";
//     cin >> a>> b;
//     bisection(a , b);
// return 0;
// }


/*
epsilon = 0.01
x*x*x + x*x +2
    c = a;
void bisection(double a , double b)
{
    if(func(a)*func(b) >= 0)
    cout << wrong assumption

    else
    while b-a >= epsilon
    c = a+b/2;
    if func(c)*fnc(a) < 0
        b = c;
    else
         a = c;
}
*/

// #include <stdio.h>
// #include <stdlib.h>

// struct p{
//     int x;
//     char y;
// };
// int main(){
//     struct p p1[] = {1,21,69,42,64};
//     struct p *ptr1 = p1;
//     int x= (sizeof(p1)/4);
//     if ((x == sizeof(int)) + 2*sizeof(char))
//     {
//         printf("true");
//     }
//     else printf("false");
    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// class stacknode
// {
//     public:
//         char data;
//         stacknode *next;
//         stacknode(char data){
//             this->data = data;
//             this->next = nullptr;
//         }
// };

// bool is_empty1(stacknode *head)
// {
//     return (head == nullptr);
// }

// void push(stacknode **head , int key)
// {
//     stacknode *newnode = new stacknode(key);
//     if(*head == nullptr){
//         *head = newnode;
//     }
//     else{
//         newnode->next = *head;
//         *head = newnode;
//     }
// }

// char pop(stacknode **head){
//     stacknode *temp = *head;
//     if(*head == nullptr){
//         cout << "stack underflow"<<endl;
//         // return CHAR_MIN;
//         return '\0';
//     }
//     else{
//         char x = temp->data;
//         *head = temp->next;
//         delete [] temp;
//         return x;
//     }
// }

// char peek(stacknode **head)
// {
//     if(*head == nullptr)
//     {
//         cout<< "empty heheh"<<endl;
//         return '\0';
//     }
//     else
//     {
//         return ((*head)-> data);
//     }
// }

// void display(stacknode **head)
// {
//     stacknode *temp = *head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// bool check_paranthesis(string str)
// {
//     stacknode *top = nullptr;
//     for (int i = 0; i < str.length() ; i++)
//     {
//         if(str[i] == '{' || str[i] == '[' || str[i] == '(')
//         {
//             push(&top , str[i]);
//         }
//         else if(str[i] == ')')
//         {
//             if(is_empty1(top) != 0 && peek(&top) == '(')
//             {
//                 pop(&top);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         else if(str[i] == '}')
//         {
//             if(is_empty1(top) != 0 && peek(&top) == '{')
//             {
//                 pop(&top);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         else if(str[i] == ']')
//         {
//             if(is_empty1(top) != 0 && peek(&top) == '[')
//             {
//                 pop(&top);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     if(is_empty1(top))
//         return true;
//     else
//         return false;
// }

// int main(){
//     string str ;
//     cin >> str;
//     cout << check_paranthesis(str);
// return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// using namespace std;
// int a;
// void fun(){
// int a;
//  ::a = a + 5;
// }
// void fun2(){

//     //code
//     a = 0;
// }
// int main(){
//     // cout<< (-1)%7;
//     string name, name2;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<a<<endl;
//     cout<<"value of a after adding 5 : ";
//     fun();
//     fun2();
//     cout<<a;
//     // cout<<name2;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class example{
//     int a;
//     int b;
//     public: 
//     void printAddress(){
//         cout<<"The address of this object is : "<<this<<endl;
//     }
// };
// int main(){
//     example e1,e2,e3;
//     e1.printAddress();
//     e2.printAddress();
//     e3.printAddress();

       
// return 0;
// }
// #include<bits/stdc++.h> 
// using namespace std;
// int main(){
//     string s = "Hello geek     ";
//     s.resize(5);
//     // s.shrink_to_fit();
//     cout<<s+" /";
// return 0;
// } 
// void reverse(int arr[], int l, int r) 
// { 
//     if (l < r) { 
//         swap(arr[l], arr[r]); 
//         reverse(arr, ++l, --r); 
//     } 
// } 
  
// // Merges two subarrays of arr[]. 
// // First subarray is arr[l..m] 
// // Second subarray is arr[m+1..r] 
// void merge(int arr[], int l, int m, int r) 
// { 
//     int i = l; // Initial index of 1st subarray 
//     int j = m + 1; // Initial index of IInd 
  
//     while (i <= m && arr[i] < 0) 
//         i++; 
  
//     // arr[i..m] is positive 
  
//     while (j <= r && arr[j] < 0) 
//         j++; 
  
//     // arr[j..r] is positive 
  
//     // reverse positive part of left sub-array (arr[i..m]) 
//     reverse(arr, i, m); 
  
//     // reverse negative part of right sub-array (arr[m+1..j-1]) 
//     reverse(arr, m + 1, j - 1); 
  
//     // reverse arr[i..j-1] 
//     reverse(arr, i, j - 1); 
// } 
  
// // Function to Rearrange positive and negative 
// // numbers in a array 
// void RearrangePosNeg(int arr[], int l, int r)
// { 
//     if (l < r) { 
//         // Same as (l+r)/2, but avoids overflow for 
//         // large l and h 
//         int m = l + (r - l) / 2; 
  
//         // Sort first and second halves 
//         RearrangePosNeg(arr, l, m); 
//         RearrangePosNeg(arr, m + 1, r); 
  
//         merge(arr, l, m, r); 
//     } 
// } 

// void Rearrange(int arr[], int n)
// {
//     RearrangePosNeg(arr, 0, n - 1); 
// // }
// #include<stdio.h>
// #include<conio.h>

// main()
// {
// char c, *cptr;
// void v, *vptr;
// c=65; v=0;
// cptr=&c; vptr=&v;
// printf("%d %d",*cptr,*vptr);
// }
// #include<stdio.h>
// #include<conio.h>
// void fun(void*p);
// int i;
// int main()
// {
// void *vptr;
// vptr=&i;
// fun(vptr);
// }
// void fun(void*p)
// {
// int **q;
// q=(int**)&p;
// printf("%d",**q);
// return 0;
// }
// #include<stdio.h>
// #include<string.h>
// char *someFun1()
// {
// char temp[ ]="string";
// return temp;
// }
// char *someFun2()
// {
// char temp[]={'s', 't','r','i','n','g'};
// return temp;
// }
// void main()
// {
// printf("%s",someFun1());
// printf("%s",someFun2());
// }
// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     int x;
// };
// class V{
//     public:
//     int y;
// };

// int main(){
//     A *p;
//     A a;
//     V *q;
//     V v;
//     p = (A*)q;
//     p = (A*)&v;
//     a = v;
//     a = (A)v;
//     return 0;

//     return 0;
// }
// #include<iostream>
// using namespace std;


// class vehicle{
//     public:
//     int a;
//     void fun(int x);
// };                          // isa - ISA
// class cars: public vehicle{ // cars is specialisation of vehicle // vehicle is generelisation of cars
// public:
//     int b;          
//     void fun(int x){
//         //some fucking code
//     }        
//     void fun(string b){
//         //code
//     }
// };
 
// int main(){
//     vehicle v;
//     cars c;
//     v.fun(3); //vehicle::fun(int x)
//     c.fun(143);//cars::fun(int x)  //function overriding
//     c.fun("hehe"); // cars::fun(string b) // function overloading
    
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#include <string.h>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    //cin>>ttt;
    while(ttt--){
        string s = "hello student";
        strcpy(s,"hello");
        cout<<s;
    }
    return 0;
}
 4 5 1 2 3 6 7 8 
 
arr(1),arr+3(4) , arr + 5(6)