#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, stack_item;
    stack<pair<int, int>> st;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> stack_item;
        if (st.empty())
        {
            cout << "0 ";
            st.push(make_pair(i, stack_item));
        }
        else
        {
            while (!st.empty() && st.top().second < stack_item)
            {
                st.pop();
            }
            if (st.empty())
            {
                cout << "0 ";
            }
            else
            {
                cout << st.top().first << " ";
            }
            st.push(make_pair(i, stack_item));
        }
    }
}