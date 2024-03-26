#include <iostream>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long num1, num2;
    cin >> num1 >> num2;
    cout << num1 * num2 / gcd(num1, num2);
}