#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> arr;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
    {
        return true;
    }
    else if (a.second == b.second)
    {
        if (find(arr.begin(), arr.end(), a.first) < find(arr.begin(), arr.end(), b.first))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num_count, num;
    map<int, int> list;
    cin >> num_count >> num;
    for (int i = 0; i < num_count; i++)
    {
        cin >> num;
        if (find(arr.begin(), arr.end(), num) == arr.end())
        {
            arr.push_back(num);
        }
        list[num]++;
    }
    vector<pair<int, int>> v(list.begin(), list.end());
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
    {
        for (int j = 0; j < i.second; j++)
        {
            cout << i.first << " ";
        }
    }
}