#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;
    priority_queue<int, vector<int>, greater<int>> v;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> num;
            v.push(num);
        }
        while (v.size() > N)
        {
            v.pop();
        }
    }
    cout << v.top() << endl;
}