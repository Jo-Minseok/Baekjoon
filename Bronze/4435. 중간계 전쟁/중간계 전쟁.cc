#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test_count;
    cin >> test_count;
    int num;
    for (int i = 1; i <= test_count; i++)
    {
        int gan = 0, sou = 0;
        for (int j = 0; j < 6; j++)
        {
            cin >> num;
            switch (j)
            {
            case 0:
                gan += num * 1;
                break;
            case 1:
                gan += num * 2;
                break;
            case 2:
                gan += num * 3;
                break;
            case 3:
                gan += num * 3;
                break;
            case 4:
                gan += num * 4;
                break;
            case 5:
                gan += num * 10;
                break;
            }
        }
        for (int j = 0; j < 7; j++)
        {
            cin >> num;
            switch (j)
            {
            case 0:
                sou += num * 1;
                break;
            case 1:
                sou += num * 2;
                break;
            case 2:
                sou += num * 2;
                break;
            case 3:
                sou += num * 2;
                break;
            case 4:
                sou += num * 3;
                break;
            case 5:
                sou += num * 5;
                break;
            case 6:
                sou += num * 10;
                break;
            }
        }
        cout << "Battle " << i << ": ";
        if (sou > gan)
        {
            cout << "Evil eradicates all trace of Good\n";
        }
        else if (sou < gan)
        {
            cout << "Good triumphs over Evil\n";
        }
        else
        {
            cout << "No victor on this battle field\n";
        }
    }
}