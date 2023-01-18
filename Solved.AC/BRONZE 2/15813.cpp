#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int length;
    char a;
    cin >> length;
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        cin >> a;
        result += a - 'A' + 1;
    }
    cout << result;
}