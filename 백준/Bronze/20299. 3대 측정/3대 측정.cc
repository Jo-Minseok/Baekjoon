#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int team_count, sum_score_limit, score_limit, num1, num2, num3;
    int index = 0, result_team_count = 0;
    vector<int> list;
    cin >> team_count >> sum_score_limit >> score_limit;
    for (int i = 0; i < team_count; i++)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 + num2 + num3 >= sum_score_limit)
        {
            if (num1 >= score_limit && num2 >= score_limit && num3 >= score_limit)
            {
                list.push_back(num1);
                list.push_back(num2);
                list.push_back(num3);
                result_team_count++;
            }
        }
    }
    cout << result_team_count << "\n";
    for (int i = 0; i < result_team_count * 3; i++)
    {
        cout << list[i] << " ";
    }
}