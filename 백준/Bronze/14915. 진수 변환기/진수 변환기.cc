#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num1, num2;
    string result;
    cin >> num1 >> num2;
    if (num1 == 0)
    {
        cout << 0;
        return 0;
    }
    while (num1 != 0)
    {
        switch (num1 % num2)
        {
        case 10:
            result += 'A';
            break;
        case 11:
            result += 'B';
            break;
        case 12:
            result += 'C';
            break;
        case 13:
            result += 'D';
            break;
        case 14:
            result += 'E';
            break;
        case 15:
            result += 'F';
            break;
        default:
            result += to_string(num1 % num2);
        }
        num1 /= num2;
    }
    reverse(result.begin(), result.end());
    cout << result;
}