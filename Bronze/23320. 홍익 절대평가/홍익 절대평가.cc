#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(0);
    cout << fixed;
    vector<int> list;
    int human_count, score, limit_score, result2 = 0;
    double percentage, result1 = 0;
    cin >> human_count;
    for (int i = 0; i < human_count; i++)
    {
        cin >> score;
        list.push_back(score);
    }
    cin >> percentage >> limit_score;
    for (auto i : list)
    {
        if (i >= limit_score)
        {
            result2++;
        }
    }
    result1 = human_count * (percentage / 100);
    cout << result1 << " " << result2;
}