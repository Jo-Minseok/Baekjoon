#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    int arr[10] = {0};
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (arr[num] == 0)
        {
            arr[num]++;
        }
        else
        {
            arr[num]--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            cout << i;
        }
    }
}