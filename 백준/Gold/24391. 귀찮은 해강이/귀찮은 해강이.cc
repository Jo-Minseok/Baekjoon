#include <iostream>
#include <vector>
using namespace std;
int Parr[100001];

int Parent_Find(int a)
{
    if (Parr[a] == a)
    {
        return a;
    }
    return Parr[a] = Parent_Find(Parr[a]);
}

void Union_set(int a, int b)
{
    int x = Parent_Find(Parr[a]);
    int y = Parent_Find(Parr[b]);
    Parr[x] = y;
}

bool isUnion(int a, int b)
{
    return Parent_Find(Parr[a]) == Parent_Find(Parr[b]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;
    int instruct_count, link_count, node1, node2;
    cin >> instruct_count >> link_count;
    for (int i = 0; i < 100001; i++)
    {
        Parr[i] = i;
    }
    while (link_count--)
    {
        cin >> node1 >> node2;
        Union_set(node1, node2);
    }

    for (int i = 0; i < instruct_count; i++)
    {
        cin >> node1;
        arr.push_back(node1);
    }
    int result = 0;
    for (int i = 0; i < instruct_count - 1; i++)
    {
        if (!isUnion(arr[i], arr[i + 1]))
        {
            result++;
        }
    }
    cout << result;
}