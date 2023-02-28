#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test_count, count;
    cin >> test_count;
    cout << test_count << "\n";
    for (int i = 1; i <= test_count; i++)
    {
        if (test_count != i)
        {
            cout << i << " ";
        }
        else
        {
            cout << 53;
        }
    }
}