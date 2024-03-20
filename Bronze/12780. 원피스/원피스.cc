#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text1, text2;
    int result = 0;
    cin >> text1 >> text2;
    while (true)
    {
        if (text1.find(text2) == string::npos)
        {
            break;
        }
        result++;
        text1 = text1.substr(text1.find(text2)+text2.length(), text1.length() - text1.find(text2));
    }
    cout << result;
}