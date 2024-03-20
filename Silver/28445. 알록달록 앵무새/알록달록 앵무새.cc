#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, string> a, pair<string, string> b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first == b.first)
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

    string color[4];
    set<pair<string, string>> l;
    for (int i = 0; i < 4; i++)
    {
        cin >> color[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            l.insert({color[i], color[j]});
        }
    }
    vector<pair<string, string>> a(l.begin(), l.end());
    sort(a.begin(), a.end(), comp);
    for (auto i : a)
    {
        cout << i.first << " " << i.second << "\n";
    }
}