#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, num;
    vector<unsigned long long> list(101, 0);
    list[1] = 1;
    list[2] = 1;
    list[3] = 1;
    list[4] = 2;
    list[5] = 2;
    for (int i = 6; i <= 100; i++)
    {
        list[i] = list[i - 3] + list[i - 2];
    }
    cin >> test_case;
    while (test_case--)
    {
        cin >> num;
        cout << list[num] << "\n";
    }
}