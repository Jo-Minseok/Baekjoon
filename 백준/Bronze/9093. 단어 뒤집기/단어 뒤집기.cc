#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {
        string text, tmp;
        getline(cin, text);
        stringstream a(text);
        while (a >> tmp)
        {
            reverse(tmp.begin(), tmp.end());
            cout << tmp << " ";
        }
        cout << "\n";
    }
}