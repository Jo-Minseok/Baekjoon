#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test_count;
    cin >> test_count;
    int min = 0, young = 0, time;
    for (int i = 0; i < test_count; i++)
    {
        cin >> time;
        young += (time / 30 + 1) * 10;
        min += (time / 60 + 1) * 15;
    }
    if (young > min)
    {
        cout << "M " << min;
    }
    else if (young < min)
    {
        cout << "Y " << young;
    }
    else
    {
        cout << "Y M " << min;
    }
}