#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    cin >> test_case;
    int arr[5];
    while (test_case--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 5);
        int score = 0;
        if (arr[3] - arr[1] >= 4)
        {
            cout << "KIN\n";
        }
        else
        {
            for (int i = 1; i < 4; i++)
            {
                score += arr[i];
            }
            cout << score << "\n";
        }
    }
}