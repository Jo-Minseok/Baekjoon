#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int dp[500][500] = {0}, num, result = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> dp[i][j];
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j];
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
            }
            if (result < dp[i][j])
            {
                result = dp[i][j];
            }
        }
    }
    cout << result;
}