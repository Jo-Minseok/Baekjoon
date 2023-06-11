#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "I LOVE CBNU";
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << "*";
        }
        cout << "\n";
        for (int i = 0, j = num / 2, space = -1; i < num / 2 + 1; i++, j--, space += 2)
        {
            for (int k = 0; k < j; k++)
            {
                cout << " ";
            }
            cout << "*";
            if (i == 0)
            {
                cout << "\n";
                continue;
            }
            for (int k = 0; k < space; k++)
            {
                cout << " ";
            }
            cout << "*\n";
        }
    }
}