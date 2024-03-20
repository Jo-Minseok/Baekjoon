#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int a)
{
    int prime = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            prime++;
        }
    }
    if (prime == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2, result;
    cin >> num1 >> num2;
    result = num2 * 1000000 + num1;
    if (Prime(result) && Prime(num1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}