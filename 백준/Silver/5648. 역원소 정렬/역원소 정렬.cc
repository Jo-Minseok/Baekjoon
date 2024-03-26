#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> list;
    long long count, num;
    string text;
    cin >> count;
    for (long long i = 0; i < count; i++)
    {
        cin >> num;
        text = to_string(num);
        reverse(text.begin(), text.end());
        list.push_back(stoull(text));
    }
    sort(list.begin(), list.end());
    for (auto i : list)
    {
        cout << i << "\n";
    }
}