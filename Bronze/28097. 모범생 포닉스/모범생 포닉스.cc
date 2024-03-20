#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T, result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> T;
        result += T;
    }
    result += 8 * (N - 1);
    cout << result / 24 << " " << result % 24;
}