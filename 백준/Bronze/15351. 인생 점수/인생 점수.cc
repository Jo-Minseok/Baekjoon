#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string text;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {
        int score = 0;
        getline(cin, text);
        for (auto i : text)
        {
            if (isalpha(i))
            {
                score += i - 'A' + 1;
            }
        }
        if (score == 100)
        {
            cout << "PERFECT LIFE\n";
        }
        else
        {
            cout << score << "\n";
        }
    }
}