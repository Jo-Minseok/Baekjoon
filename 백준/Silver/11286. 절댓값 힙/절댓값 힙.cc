#include <iostream>
#include <queue>
using namespace std;

class comp
{
public:
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        return abs(a) > abs(b);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int operation_count, num;
    priority_queue<int, vector<int>, comp> pq;
    cin >> operation_count;
    while (operation_count--)
    {
        cin >> num;
        if (num == 0)
        {
            if (pq.empty())
                cout << 0 << '\n';
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(num);
        }
    }
}