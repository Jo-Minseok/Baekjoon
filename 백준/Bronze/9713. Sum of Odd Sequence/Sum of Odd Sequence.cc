#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int result = 0;
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            if (j % 2 != 0)
            {
                result += j;
            }
        }
        cout << result << "\n";
    }
}