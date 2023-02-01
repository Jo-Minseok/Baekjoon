#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[3] = {0};
    int min, min2;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    min = arr[1] - arr[0];
    min2 = arr[2] - arr[1];
    if (min > min2)
    {
        cout << arr[0] + min2;
    }
    else if (min < min2)
    {
        cout << arr[1] + min;
    }
    else
    {
        cout << arr[2] + min;
    }
}