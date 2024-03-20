#include <iostream>
using namespace std;

int gcd(int a, int b)
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

    int test_case;
    int num1, num2;
    cin >> test_case;
    while (test_case--)
    {
        cin >> num1 >> num2;
        int gcd_a;
        if (num1 > num2)
        {
            gcd_a = gcd(num1, num2);
        }
        else
        {
            gcd_a = gcd(num2, num1);
        }
        cout << num1 * num2 / gcd_a << "\n";
    }
}