#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    string result;
    cin >> num;
    while (num != 0)
    {
        result += num % 9 + '0';
        num /= 9;
    }
    reverse(result.begin(), result.end());
    cout << result;
}