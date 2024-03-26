#include <iostream>
#include <string>
#include <map>
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
    int computer_count, network_pair_count,node1,node2;
    cin >> computer_count >> network_pair_count;
    Make_set();
    while (network_pair_count--) {
        cin >> node1 >> node2;
        Union(node1, node2);
    }
    int count = 0;
    for (int i = 2; i <= MAX_SIZE; i++) {
        if (Find(1) == Find(i)) {
            count++;
        }
    }
    cout << count;
}