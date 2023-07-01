#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    getline(cin, text);
    int happy = 0, sad = 0;
    for (int i = 0; i < text.length(); i++)
    {
        string face;
        if (text[i] == ':')
        {
            face = text.substr(i, 3);
        }
        if (face == ":-)")
        {
            happy++;
        }
        else if (face == ":-(")
        {
            sad++;
        }
    }
    if (happy == 0 && sad == 0)
    {
        cout << "none";
    }
    else if (happy == sad)
    {
        cout << "unsure";
    }
    else if (happy < sad)
    {
        cout << "sad";
    }
    else
    {
        cout << "happy";
    }
}