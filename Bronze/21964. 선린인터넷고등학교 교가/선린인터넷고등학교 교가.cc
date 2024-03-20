#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int length;
    string text;
    cin >> length >> text;
    for (int i = text.length() - 5; i < text.length(); i++)
    {
        cout << text[i];
    }
}