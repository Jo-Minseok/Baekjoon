#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int start, end, index = 1, sum = 0;
    cin >> start >> end;
    for (int i = 1; i <= end; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (start <= index && index <= end)
            {
                sum += i;
            }
            index++;
        }
    }
    cout << sum;
}