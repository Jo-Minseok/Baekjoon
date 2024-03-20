#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int count, num, even = 0, odd = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (count % 2 == 0)
    {
        if (even == odd)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if (odd - 1 == even)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}