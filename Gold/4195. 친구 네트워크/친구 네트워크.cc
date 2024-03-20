#include <iostream>
#include <string>
#include <map>

using namespace std;
#define MAX_SIZE 200000

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
    int test_case;
    string name1, name2;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        Make_set();
        map<string, int> list;
        map<string,int>::iterator it;
        int link_count;
        cin >> link_count;
        int index = 0;
        for (int j = 0; j < link_count; j++) {
            cin >> name1 >> name2;
            int a, b;
            it = list.find(name1);
            if (it == list.end()) {
                list[name1] = ++index;
                a = index;
            }
            else {
                a = it->second;
            }

            it = list.find(name2);
            if (it == list.end()) {
                list[name2] = ++index;
                b = index;
            }
            else {
                b = it->second;
            }
            Union(a, b);
            cout << rank_arr[Find(a)] << "\n";
        }
    }
}