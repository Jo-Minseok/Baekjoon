#include <iostream>
using namespace std;

unsigned long long arr[91] = {0, 1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[num];
}