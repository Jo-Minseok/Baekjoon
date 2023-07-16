#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, club, a, b, c, result = 0;
    cin >> A >> B >> C;
    cin >> club;
    for (int i = 0; i < club; i++)
    {
        int sum_club = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a >> b >> c;
            sum_club += a * A + b * B + c * C;
        }
        if (sum_club > result)
        {
            result = sum_club;
        }
    }
    cout << result;
}