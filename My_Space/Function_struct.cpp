#include <iostream>
using namespace std;
struct Student
{
    int roll;
    string name;
    int age;
    string address;
};
void Print_name(Student S);
void Display_details(Student S);

int main()
{
    Student s1[11];
    s1[0] = {0, "a", 12, "Zxy"};
    s1[1] = {1, "b", 13, "Zxy"};
    s1[2] = {2, "c", 13, "Zxy"};
    s1[3] = {3, "d", 14, "Zxy"};
    s1[4] = {4, "e", 11, "Zxy"};
    s1[5] = {5, "f", 12, "Zxy"};
    s1[6] = {6, "g", 13, "Zxy"};
    s1[7] = {7, "h", 14, "Zxy"};
    s1[8] = {8, "i", 14, "Zxy"};
    s1[9] = {9, "j", 11, "Zxy"};
    s1[10] = {10, "k", 13, "Zxy"};

    //1 - Write a function to print the
    // names of all the students having age 14.
    cout<<"Question 1:\n";
    for (int i = 0; i < 11; i++)
    {
        if (s1[i].age == 14)
        {
            Print_name(s1[i]);
        }
    }

    // 2 - Write another function to print
    //the names of all the students having
    //even roll no.
    cout<<"Question 2:\n";
    for (int i = 0; i < 11; i += 2)
    {
        Print_name(s1[i]);
    }

    //3 - Write another function to display
    //the details of the student whose roll no
    //is given (i.e. roll no. entered by the user).
    cout<<"Question 3:\n";
    int rollin;

    cout << "Enter the roll number : ";
    cin >> rollin;

    Display_details(s1[rollin]);

    

    return 0;
}
void Print_name(Student S)
{
    cout << S.name << endl;
}
void Display_details(Student S){
    cout << S.roll
         << ", " << S.name
         << ", " << S.age
         << ", " << S.address
         << endl;
}