#include <iostream>
#include <limits>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, recent, day, need, result = INT32_MAX;
    cin >> day >> need;
    for (int i = 0; i < day; i++)
    {
        cin >> num;
        if (i == 0)
        {
            recent = num;
        }
        else
        {
            if (recent * need + num * need < result)
                result = recent * need + num * need;
            recent = num;
        }
    }
    cout << result;
}