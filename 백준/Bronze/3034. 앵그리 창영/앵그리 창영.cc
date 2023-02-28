#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int test_count, length, width1, width2;
    cin >> test_count >> width1 >> width2;
    for (int i = 0; i < test_count; i++)
    {
        cin >> length;
        if (length <= width1)
        {
            cout << "DA\n";
        }
        else if (length <= width2)
        {
            cout << "DA\n";
        }
        else if (length <= sqrt(pow(width1, 2) + pow(width2, 2)))
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NE\n";
        }
    }
}