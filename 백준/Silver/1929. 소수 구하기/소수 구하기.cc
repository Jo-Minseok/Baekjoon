#include <iostream>
#include <cmath>
using namespace std;
int arr[1000001];
int main()
{
    int start, end;
    cin >> start >> end;
    for (int i = 2; i <= 1000000; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i * i; j <= 1000000; j += i)
            arr[j] = 0;
    }
    for (int i = start; i <= end; i++)
    {
        if (arr[i] != 0)
            printf("%d\n", arr[i]);
    }
}