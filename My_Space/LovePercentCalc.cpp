#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
bool is2Digit(vector<int> v2);
void strToint(string fullss);
void intToint(vector<int> v1);

bool is2Digit(vector<int> v2)
{
    vector<int> maxx = {1, 0, 0};
    if (v2 == maxx)
    {
        cout << endl
             << "Damn 100% ";
        return 1;
    }
    else if (v2.size() == 2)
    {
        cout << endl
             << "Its " << v2[0] << v2[1] << "%";
        return 1;
    }
    else
        return 0;
}
void strToint(string fullss)
{
    vector<int> line;
    int count = 0;
    char ch;

    for (int i = 0; i < fullss.length(); i++)
    {
        count = 0;
        if (isspace(fullss[i]) || fullss[i] == '0')
        {
            continue;
        }
        else
        {
            ch = fullss[i];
        }

        for (int j = 0; j < fullss.length(); j++)
        {
            if (fullss[j] == ch)
            {
                count++;

                fullss[j] = '0';
            }
        }
        line.push_back(count);
    }
    for (auto x : line)
    {
        cout << x << " ";
    }
    cout << endl;
    if (!is2Digit(line))
    {

        intToint(line);
    }
}

void intToint(vector<int> v1)
{
    int sum;
    int t;
    int r1, r2;
    if (v1.size() % 2 != 0)
        t = (v1.size()) / 2 + 1;
    else
        t = (v1.size()) / 2;

    vector<int> v3;

    while (t--)
        if (v1.size() != 1)
        {
            sum = v1[0] + v1[(v1.size() - 1)];
            if (sum <= 9)
            {
                v3.push_back(sum);
            }
            else
            {
                r2 = sum % 10;
                sum /= 10; 
                r1 = sum;
                v3.push_back(r1);
                v3.push_back(r2);
            }
            v1.pop_back();

            v1.erase(v1.begin());
        }
        else
        {
            v3.push_back(v1[0]);
            v1.clear();
        }
    for (auto x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    if (!is2Digit(v3))
    {
        intToint(v3);
    }
}

int main()
{
    string name1, name2, rel, fulls;
    int Rel;

    system("cls");

    cout << "\t WELCOME TO PERCENTAGE CALCUlATOR FOR 2 PEOPLE\n\n" ;

    cout << "Enter the first name: "; //justin
    getline(cin, name1);

    cout << "Select the relation " << endl;
    cout << "1)loves \n2)friends \n3)hates\n4)love" << endl ;
    Rel = getch();

    switch (Rel - 48)
    {
    case 1:
        rel = "loves";
        system("cls");
        cout << "\t WELCOME TO PERCENTAGE CALCUlATOR FOR 2 PEOPLE\n\n";
        cout << "Enter the first name: " << name1 << endl
             << endl;

        cout << "\t\t\tloves  " << endl;

        break;

    case 2:
        rel = "friends";
        system("cls");
        cout << "\t WELCOME TO PERCENTAGE CALCUlATOR FOR 2 PEOPLE\n\n";
        cout << "Enter the first name: " << name1 << endl;
        cout << " \n\t\t\tfriends " << endl;
        break;

    case 3:
        rel = "hates";
        system("cls");
        cout << "\t WELCOME TO PERCENTAGE CALCUlATOR FOR 2 PEOPLE\n\n";
        cout << "Enter the first name: " << name1;

        cout << " \n \n\t\t\thates" << endl;
        break;

    case 4:
        rel = "love";
        system("cls");
        cout << "\t WELCOME TO PERCENTAGE CALCUlATOR FOR 2 PEOPLE\n\n";
        cout << "Enter the first name: " << name1;

        cout << " \n \n\t\t\tlove" << endl;
        break;

    default:
        cout << "wrong entry run again";
        return 0;
    }

    cout << endl;

    cout << "Enter the second name: ";
    getline(cin, name2);

    system("cls");// clear screen

    transform(name2.begin(), name2.end(), name2.begin(), ::tolower);
    transform(name1.begin(), name1.end(), name1.begin(), ::tolower);

    cout << name1 << "\n\n"
         << rel << "\n\n"
         << name2 << endl;

    fulls = name1 + rel + name2;

    strToint(fulls);
    return 0;
}

//