#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string text;
    cin >> text;
    for (int i = 0; i < text.length(); i++)
    {
        string tmp;
        if (text[i] == 'p')
        {
            tmp = text.substr(i, 2);
            if (tmp != "pi")
            {
                cout << "NO";
                return 0;
            }
            text = text.substr(i + 2, text.length() - 2);
            i = -1;
        }
        else if (text[i] == 'k')
        {
            tmp = text.substr(i, 2);
            if (tmp != "ka")
            {
                cout << "NO";
                return 0;
            }
            text = text.substr(i + 2, text.length() - 2);
            i = -1;
        }
        else if (text[i] == 'c')
        {
            tmp = text.substr(i, 3);
            if (tmp != "chu")
            {
                cout << "NO";
                return 0;
            }
            text = text.substr(i + 3, text.length() - 3);
            i = -1;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}