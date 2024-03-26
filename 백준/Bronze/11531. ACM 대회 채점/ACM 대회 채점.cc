#include <iostream>
#include <map>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int time, result_time = 0, right_problem = 0;
    char problem;
    string result;
    map<char, pair<int, int>> m;
    while (true)
    {
        cin >> time;
        if (time == -1)
        {
            break;
        }
        cin >> problem >> result;
        if (result == "right")
        {
            right_problem++;
            result_time += time;
            result_time += m[problem].first * 20;
        }
        else
        {
            m[problem].first++;
        }
    }
    cout << right_problem << " " << result_time;
}