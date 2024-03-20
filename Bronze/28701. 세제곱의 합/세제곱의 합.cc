#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    unsigned long long sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> num;
    sum1 = num * (num + 1) / 2;
    sum2 = sum1 * sum1;
    for (int i = 1; i <= num; i++)
    {
        sum3 += i * i * i;
    }
    cout << sum1 << "\n"
         << sum2 << "\n"
         << sum3 << "\n";
}