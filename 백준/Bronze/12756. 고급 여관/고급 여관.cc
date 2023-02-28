#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Aattack, AHP, Battack, BHP;
    cin >> Aattack >> AHP >> Battack >> BHP;
    while (true)
    {
        AHP -= Battack;
        BHP -= Aattack;
        if (AHP < 1 || BHP < 1)
        {
            break;
        }
    }
    if (AHP < 1 && BHP < 1)
    {
        cout << "DRAW";
    }
    else if (AHP < BHP)
    {
        cout << "PLAYER B";
    }
    else if (AHP > BHP)
    {
        cout << "PLAYER A";
    }
}