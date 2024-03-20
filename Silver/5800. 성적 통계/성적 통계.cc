#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, score_count, score;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        cin >> score_count;
        vector<int> list;
        for(int j=0;j<score_count;j++){
            cin >> score;
            list.push_back(score);
        }
        sort(list.begin(), list.end());
        int gap = 0;
        for (int i = 1; i < score_count; i++)
        {
            if (gap < list[i] - list[i-1])
            {
                gap = list[i] - list[i-1];
            }
        }
        cout << "Class " << i << "\n";
        cout << "Max " << *max_element(list.begin(), list.end()) << ", Min " << *min_element(list.begin(), list.end()) << ", Largest gap " << gap << "\n";
    }
}