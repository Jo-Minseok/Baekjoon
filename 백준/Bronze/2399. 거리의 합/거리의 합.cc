#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, xpos;
    unsigned long long result = 0;
    vector<int> list;
    cin >> num;
    while (num--)
    {
        cin >> xpos;
        list.push_back(xpos);
    }
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list.size(); j++)
        {
            result += abs(list[i] - list[j]);
        }
    }
    cout << result;
}