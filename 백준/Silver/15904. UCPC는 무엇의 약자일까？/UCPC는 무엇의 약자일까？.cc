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
    char arr[4] = {'U', 'C', 'P', 'C'};
    int j = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == arr[j])
        {
            j++;
        }
    }
    if (j == 4)
    {
        cout << "I love UCPC";
    }
    else
    {
        cout << "I hate UCPC";
    }
}