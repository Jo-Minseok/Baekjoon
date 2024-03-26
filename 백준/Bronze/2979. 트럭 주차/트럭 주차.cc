#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, start, end, result = 0;
    int arr[101] = {0};
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++)
    {
        cin >> start >> end;
        for (int j = start; j < end; j++)
        {
            arr[j]++;
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        if (arr[i] == 1)
        {
            result += arr[i] * A;
        }
        else if (arr[i] == 2)
        {
            result += arr[i] * B;
        }
        else
        {
            result += arr[i] * C;
        }
    }
    cout << result;
    return 0;
}