#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return a < b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int test_case, num;
    cin >> test_case;
    while (test_case--)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
    {
        cout << i << '\n';
    }
}