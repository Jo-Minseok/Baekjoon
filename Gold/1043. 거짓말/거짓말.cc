#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define MAX_SIZE 100

int parent[MAX_SIZE + 1];
int rank_arr[MAX_SIZE + 1];

void Make_set() {
    for (int i = 1; i < MAX_SIZE + 1; i++)
    {
        parent[i] = i;
        rank_arr[i] = 1;
    }
}

int Find(int x)
{
    if (x == parent[x])
    {
        return x;
    }
    return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
    {
        return;
    }
    if (rank_arr[x] > rank_arr[y])
    {
        parent[y] = x;
        rank_arr[x] += rank_arr[y];
    }
    else
    {
        parent[x] = y;
        rank_arr[y] += rank_arr[x];
    }
}

bool isUnion(int x, int y)
{
    return Find(x) == Find(y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int human_count, party_count,true_person,true_human_number;
    int party_human,num;
    cin >> human_count >> party_count; // 사람 수, 파티 수
    cin >> true_person; // 진실을 아는 사람 수
    vector<vector<int>>list(50);
    vector<int> know;

    Make_set();
    while (true_person--) {
        cin >> true_human_number;
        know.push_back(true_human_number);
    }
    for(int i=0;i<party_count;i++) {
        cin >> party_human;
        int prev;
        for (int j = 0; j < party_human; j++) {
            if (j >= 1) {
                prev = num;
                cin >> num;
                Union(prev, num);
            }
            else {
                cin >> num;
            }
            list[i].push_back(num);
        }
    }

    for (auto it : list) {
        bool flag = false;
        for (auto person : it) {
            if (flag) {
                break;
            }
            for (auto t : know) {
                if (Find(person) == Find(t)) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) {
            party_count--;
        }
    }
    cout << party_count;
}