#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int>a, pair<string, int>b) {
    return a.second > b.second;
}

void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();

    int test_case, score1, score2;
    string con1, con2;

    cin >> test_case;

    while (test_case--)
    {
        map<string, int> m;
        for (int i = 0; i < 16; i++)
        {
            cin >> con1 >> con2 >> score1 >> score2;
            if (score1 > score2)
            {
                m[con1]++;
            }
            else if(score1 < score2) {
                m[con2]++;
            }
        }
        vector<pair<string, int>> v(m.begin(),m.end());
        sort(v.begin(), v.end(), comp);
        cout << v[0].first << "\n";
    }
}