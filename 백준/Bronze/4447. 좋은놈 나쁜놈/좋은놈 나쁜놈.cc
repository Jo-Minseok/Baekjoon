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
        int g = 0, b = 0, n = 0;
        getline(cin, text);
        for (int i = 0; i < text.length(); i++)
        {
            switch (text[i])
            {
            case 'g':
            case 'G':
                g++;
                break;
            case 'b':
            case 'B':
                b++;
                break;
            }
        }
        cout << text << " is ";
        if (g == b)
        {
            cout << "NEUTRAL\n";
        }
        else if (g > b)
        {
            cout << "GOOD\n";
        }
        else
        {
            cout << "A BADDY\n";
        }
    }
}