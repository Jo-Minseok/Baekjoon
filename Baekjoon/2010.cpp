#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test, num;
    int result = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> num;
        result += num;
    }
    cout << result - (test - 1);
}