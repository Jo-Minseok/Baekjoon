#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    while (true)
    {
        getline(cin, text);
        if (text == "EOI")
        {
            break;
        }
        for (int i = 0; i < text.length(); i++) {
            if (isupper(text[i])) {
                text[i] = tolower(text[i]);
            }
        }
        if (text.find("nemo") != string::npos)
        {
            cout << "Found\n";
        }
        else
        {
            cout << "Missing\n";
        }
    }
}