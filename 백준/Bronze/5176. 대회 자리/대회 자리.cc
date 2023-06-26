#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, human, seat_count, seat_num;
    cin >> test_case;
    while (test_case--)
    {
        int arr[501] = {0}, result = 0;
        cin >> human >> seat_count;
        while (human--)
        {
            cin >> seat_num;
            if (arr[seat_num] == 1)
            {
                result++;
            }
            else
            {
                arr[seat_num] = 1;
            }
        }
        cout << result << "\n";
    }
}