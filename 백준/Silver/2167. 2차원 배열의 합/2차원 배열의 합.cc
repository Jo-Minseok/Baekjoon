#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int column, row, arr[301][301], num, i_main, j_main, x, y;

    cin >> column >> row;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int result = 0;
        cin >> i_main >> j_main >> y >> x;
        for (int j = i_main - 1; j <= y - 1; j++)
        {
            for (int k = j_main - 1; k <= x - 1; k++)
            {
                result += arr[j][k];
            }
        }
        cout << result << "\n";
    }
}