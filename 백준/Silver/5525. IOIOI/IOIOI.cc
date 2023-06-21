#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, length, result = 0;
    string p = "IOI";
    string text;
    cin >> num >> length >> text;
    if (num != 1)
    {
        for (int i = 1; i < num; i++)
        {
            p += "OI";
        }
    }
    while (true)
    {
        int index = text.find(p);
        if (index == string::npos)
        {
            break;
        }
        result++;
        text = text.substr(index+1, text.length() - index);
    }
    cout << result;
}