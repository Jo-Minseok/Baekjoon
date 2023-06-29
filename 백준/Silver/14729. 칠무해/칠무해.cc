#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<double> list;
    cout.precision(3);
    cout << fixed;

    int test_case;
    double num;
    cin >> test_case;
    while (test_case--)
    {
        cin >> num;
        list.push_back(num);
    }
    sort(list.begin(), list.end());
    for (int i = 0; i < 7; i++)
    {
        cout << list[i] << "\n";
    }
}