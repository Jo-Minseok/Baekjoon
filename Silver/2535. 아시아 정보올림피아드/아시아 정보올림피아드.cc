#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.second.second > b.second.second)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int student_count, country_num, student_num, score;
    vector<pair<int, pair<int, int>>> student_info;
    cin >> student_count;
    int* arr = new int[student_count] {0};
    while (student_count--)
    {
        cin >> country_num >> student_num >> score;
        student_info.push_back(make_pair(country_num, make_pair(student_num, score)));
    }
    sort(student_info.begin(), student_info.end(), comp);
    int j = 0;
    for (auto i : student_info)
    {
        if (j == 3)
        {
            break;
        }
        if (arr[i.first] < 2)
        {
            cout << i.first << " " << i.second.first << "\n";
            arr[i.first]++;
            j++;
        }
    }
}