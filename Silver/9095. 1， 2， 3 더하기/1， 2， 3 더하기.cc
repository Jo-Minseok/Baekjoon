#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, num;
    cin >> test_case;
    vector<int> list(12, 0);
    list[1] = 1;
    list[2] = 2;
    list[3] = 4;
    for (int i = 4; i < 12; i++)
    {
        list[i] = list[i - 1] + list[i - 2] + list[i - 3];
    }
    for (int i = 0; i < test_case; i++)
    {
        cin >> num;
        cout << list[num] << "\n";
    }
}