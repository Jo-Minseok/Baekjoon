#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    unsigned long long a = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        a *= i;
    }
    cout << a / (60 * 60 * 24 * 7);
}