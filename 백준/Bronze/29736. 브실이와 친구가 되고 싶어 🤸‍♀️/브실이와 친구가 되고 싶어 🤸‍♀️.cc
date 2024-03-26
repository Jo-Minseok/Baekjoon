#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, X, K, result = 0;
    cin >> A >> B >> K >> X;
    for (int i = A; i <= B; i++)
    {
        if (K + X >= i && K - X <= i)
        {
            result++;
        }
    }
    if (result == 0)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << result;
    }
}