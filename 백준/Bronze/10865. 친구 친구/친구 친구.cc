#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num, num1;
    int rela, rela1;
    cin >> num >> num1;
    int *arr = new int[num]{0};
    for (int i = 0; i < num1; i++)
    {
        cin >> rela >> rela1;
        arr[rela - 1]++;
        arr[rela1 - 1]++;
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\n";
    }
}