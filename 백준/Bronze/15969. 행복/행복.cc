#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    cin >> count;
    int *arr = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    int max = *max_element(arr, arr + count);
    int min = *min_element(arr, arr + count);
    cout << max - min;
}