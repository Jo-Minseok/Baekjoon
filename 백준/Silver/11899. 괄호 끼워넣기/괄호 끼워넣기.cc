#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    string text;
    cin >> text;
    for (auto a : text)
    {
        if (st.size() == 0)
        {
            st.push(a);
        }
        else
        {
            if (a == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(a);
                }
            }
            else if (a == '(')
            {
                st.push(a);
            }
        }
    }
    cout << st.size();
}