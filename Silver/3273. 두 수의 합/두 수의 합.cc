#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr_size, x, num, result = 0;
    vector<int> list;
    cin >> arr_size;
    for (int i = 0; i < arr_size; i++)
    {
        cin >> num;
        list.push_back(num);
    }
    cin >> x;
    sort(list.begin(), list.end());
    int l = 0, r = arr_size - 1;
    while (1)
    {
        if (l >= r)
        {
            break;
        }
        if (list[l] + list[r] == x)
        {
            result++;
            l++;
            r--;
        }
        else if (list[l] + list[r] < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << result;
}