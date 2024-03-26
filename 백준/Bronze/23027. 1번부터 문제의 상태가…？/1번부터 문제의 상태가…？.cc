#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string text;
    cin >> text;
    if (text.find('A') != string::npos)
    {
        for (auto a : text)
        {
            if (a == 'B' || a == 'C' || a == 'D' || a == 'F')
            {
                cout << "A";
            }
            else
            {
                cout << a;
            }
        }
    }
    else if (text.find('B') != string::npos)
    {
        for (auto a : text)
        {
            if (a == 'C' || a == 'D' || a == 'F')
            {
                cout << "B";
            }
            else
            {
                cout << a;
            }
        }
    }
    else if (text.find('C') != string::npos)
    {
        for (auto a : text)
        {
            if (a == 'D' || a == 'F')
            {
                cout << "C";
            }
            else
            {
                cout << a;
            }
        }
    }

    else
    {
        for (auto a : text)
        {
            cout << "A";
        }
    }
}