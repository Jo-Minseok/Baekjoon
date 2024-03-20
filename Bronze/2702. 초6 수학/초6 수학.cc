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

    int test_case, num1, num2;
    cin >> test_case;
    while (test_case--)
    {
        cin >> num1 >> num2;
        if (num1 > num2)
        {
            int tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        int gcd_num = gcd(num1, num2);
        cout << num1 * num2 / gcd_num << " " << gcd_num << "\n";
    }
}