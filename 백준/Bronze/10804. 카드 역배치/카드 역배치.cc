#include <iostream>
#include <algorithm>
using namespace std;

void change(int start, int end, int arr[20])
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int num = 10;
    int start, end;
    while (num--)
    {
        cin >> start >> end;
        change(start - 1, end - 1, arr);
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}