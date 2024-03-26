#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second < b.second)
    {
        return true;
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

    int test_case, hard;
    vector<pair<string, int>> list;
    string text;
    cin >> test_case;
    while (test_case--)
    {
        cin >> text >> hard;
        list.push_back({text, hard});
    }
    sort(list.begin(), list.end(), comp);
    cout << list[0].first;
}