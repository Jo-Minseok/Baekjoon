#include <iostream>
#include <algorithm>
using namespace std;

void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();

    string answer[] = {"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};
    int test_case, result = 0;
    string text;

    cin >> test_case;
    cin.ignore();
    for (int i = 0; i < test_case; i++)
    {
        getline(cin, text);
        for (auto i : answer)
        {
            if (i == text)
            {
                result++;
            }
        }
    }
    if (result == test_case)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}