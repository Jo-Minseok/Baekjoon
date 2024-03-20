#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        string text, tmp;
        cin >> text;
        if (text == "#")
        {
            break;
        }
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            {
                tmp = text.substr(0, i);
                break;
            }
        }
        text.erase(0, tmp.length());
        text += tmp;
        cout << text + "ay"
             << "\n";
    }
}