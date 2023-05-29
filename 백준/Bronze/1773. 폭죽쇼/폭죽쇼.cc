#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int student_count, end_time, latency[100], result = 0;
    cin >> student_count >> end_time;
    for (int i = 0; i < student_count; i++)
    {
        cin >> latency[i];
    }
    for (int i = 1; i <= end_time; i++)
    {
        int count = 0;
        for (int j = 0; j < student_count; j++)
        {
            if (i % latency[j] == 0)
            {
                count++;
            }
        }
        if (count)
        {
            result++;
        }
    }
    cout << result;
}