#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num;
    cin >> num;
    for (int i = 1;; i++)
    {
        if (num == 1)
        {
            cout << i;
            break;
        }
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * num + 1;
        }
    }
}