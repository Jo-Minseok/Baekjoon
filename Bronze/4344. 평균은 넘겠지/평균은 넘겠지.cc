#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(3);
    cout << fixed;
    int test_case, human_count;
    cin >> test_case;
    while (test_case--)
    {
        int arr[1001], over = 0;
        cin >> human_count;
        double avg = 0;
        for (int i = 0; i < human_count; i++)
        {
            cin >> arr[i];
            avg += arr[i];
        }
        avg = avg / human_count;
        for (int i = 0; i < human_count; i++)
        {
            if (avg < arr[i])
            {
                over++;
            }
        }
        cout << (1.0 * over / human_count) * 100 << "%\n";
    }
}