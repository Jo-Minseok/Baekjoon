#include <iostream>
using namespace std;

int operation_count[1000001] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    operation_count[0] = 0;
    operation_count[1] = 0;
    operation_count[2] = 1;
    operation_count[3] = 1;
    cin >> num;
    for (int i = 4; i <= num; i++)
    {
        operation_count[i] = operation_count[i - 1] + 1;
        if (i % 2 == 0)
        {
            operation_count[i] = min(operation_count[i], operation_count[i / 2] + 1);
        }
        if (i % 3 == 0)
        {
            operation_count[i] = min(operation_count[i], operation_count[i / 3] + 1);
        }
    }
    cout << operation_count[num] << "\n";
}