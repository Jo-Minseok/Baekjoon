#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v, sorted;
    int num_count, num, index = 0;
    cin >> num_count;
    for (int i = 0; i < num_count; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sorted = v;
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    for (int i = 0; i < num_count; i++)
    {
        auto it = lower_bound(sorted.begin(), sorted.end(), v[i]);
        cout << it - sorted.begin() << " ";
    }
}