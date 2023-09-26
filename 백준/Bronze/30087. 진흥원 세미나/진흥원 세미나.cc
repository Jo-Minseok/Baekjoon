#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        string text;
        cin >> text;
        if (text == "Algorithm")
        {
            cout << 204 << "\n";
        }
        else if (text == "DataAnalysis")
        {
            cout << 207 << "\n";
        }
        else if (text == "ArtificialIntelligence")
        {
            cout << 302 << "\n";
        }
        else if (text == "CyberSecurity")
        {
            cout << "B101\n";
        }
        else if (text == "Network")
        {
            cout << 303 << "\n";
        }
        else if (text == "Startup")
        {
            cout << 501 << "\n";
        }
        else if (text == "TestStrategy")
        {
            cout << 105 << "\n";
        }
    }
}