#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void two(int a, int b)
{
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << "\n";
        }
    }
}

void three(int a, int b, int c)
{
    for (int i = 1; i <= c; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> list;
    int num_count, num;
    cin >> num_count;
    for (int i = 0; i < num_count; i++)
    {
        cin >> num;
        list.push_back(num);
    }
    sort(list.begin(), list.end());
    if (num_count == 2)
    {
        two(list[0], list[1]);
    }
    else
    {
        three(list[0], list[1], list[2]);
    }
}