#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        bool check = true;
        cin >> a >> b;
        int arr_1[26] = {0}, arr_2[26] = {0};
        if (a.length() != b.length())
        {
            cout << "Impossible\n";
            continue;
        }
        for (int i = 0; i < a.length(); i++)
        {
            arr_1[a[i] - 'a']++;
            arr_2[b[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr_1[i] != arr_2[i])
            {
                check = false;
            }
        }
        if (check)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
}