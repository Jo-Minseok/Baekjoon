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
    bool check = true;
    for (int i = 0, j = text.length() - 1; i < j; i++, j--)
    {
        if (text[i] != text[j])
        {
            check = false;
            break;
        }
    }
    cout << ((check) ? "true" : "false");
}