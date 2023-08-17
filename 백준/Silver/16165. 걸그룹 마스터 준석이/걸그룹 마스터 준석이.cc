#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string group_name, name;
    map<string, vector<string>> group;
    map<string, string> member;
    int group_count, problem, group_num, mode;
    cin >> group_count >> problem;
    for (int i = 0; i < group_count; i++)
    {
        cin >> group_name;
        cin >> group_num;
        for (int j = 0; j < group_num; j++)
        {
            cin >> name;
            group[group_name].push_back(name);
            member[name] = group_name;
        }
        sort(group[group_name].begin(), group[group_name].end());
    }
    for (int j = 0; j < problem; j++)
    {
        cin >> name >> mode;
        if (mode)
        {
            cout << member[name] << "\n";
        }
        else
        {
            for (auto i : group[name])
            {
                cout << i << '\n';
            }
        }
    }
}