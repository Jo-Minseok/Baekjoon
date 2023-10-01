#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, inc = 0, dec = 0;
    string name;
    vector<string> v, increase, decrease;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> name;
        v.push_back(name);
        increase.push_back(name);
        decrease.push_back(name);
    }
    sort(increase.begin(), increase.end());
    sort(decrease.begin(), decrease.end(), greater<string>());
    for (int i = 0; i < test_case; i++)
    {
        if (increase[i] == v[i])
        {
            inc++;
        }
        if (decrease[i] == v[i])
        {
            dec++;
        }
    }
    if (inc == test_case)
    {
        cout << "INCREASING" << endl;
    }
    else if (dec == test_case)
    {
        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }
}