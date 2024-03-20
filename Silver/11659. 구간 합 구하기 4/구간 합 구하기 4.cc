#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long num_count, test_case, num, start, end;
    cin >> num_count >> test_case;
    vector<unsigned long long> list(num_count + 1, 0);
    list[0] = 0;
    for (int i = 1; i <= num_count; i++)
    {
        cin >> num;
        list[i] = list[i - 1] + num;
    }
    for (int i = 0; i < test_case; i++)
    {
        cin >> start >> end;
        cout << list[end] - list[start - 1] << "\n";
    }
}