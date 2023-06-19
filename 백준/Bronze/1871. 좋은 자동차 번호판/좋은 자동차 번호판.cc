#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int iter;
    string text;
    cin >> iter;
    while (iter--)
    {
        cin >> text;
        string number = text.substr(4, 4);
        int num = stoi(number);
        int alpha = 0;
        for (int i = 0, j = 2; i < 3; i++, j--)
        {
            alpha += (text[i] - 'A') * pow(26, j);
        }
        if (abs(alpha - num) <= 100)
        {
            cout << "nice\n";
        }
        else
        {
            cout << "not nice\n";
        }
    }
}