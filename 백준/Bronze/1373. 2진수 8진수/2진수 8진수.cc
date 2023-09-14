#include <iostream>
#include <string>
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
    string text, result;
    int i = 0;
    cin >> text;
    if (text.length() % 3 == 1)
    {
        cout << text[0];
        i = 1;
    }
    else if (text.length() % 3 == 2)
    {
        cout << (text[0] - '0') * 2 + (text[1] - '0');
        i = 2;
    }
    for (; i < text.length(); i += 3)
    {
        cout << (text[i] - '0') * 4 + (text[i + 1] - '0') * 2 + (text[i + 2] - '0');
    }
    cout << result;
}