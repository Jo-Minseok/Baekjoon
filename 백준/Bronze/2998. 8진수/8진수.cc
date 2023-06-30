#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text, tmp, result;
    cin >> text;
    for (int i = text.length() - 1, j = 1; i >= 0; i--, j++)
    {
        tmp += text[i];
        if (j % 3 == 0)
        {
            reverse(tmp.begin(), tmp.end());
            result += to_string((int)((tmp[0] - '0') * pow(2, 2) + (tmp[1] - '0') * pow(2, 1) + (tmp[2] - '0') * pow(2, 0)));
            tmp = "";
        }
    }
    int length = tmp.length();
    if (tmp.length() != 0) {
        for (int i = 0; i < 3 - length; i++) {
            tmp += "0";
        }
        reverse(tmp.begin(), tmp.end());
        result += to_string((int)((tmp[0] - '0') * pow(2, 2) + (tmp[1] - '0') * pow(2, 1) + (tmp[2] - '0') * pow(2, 0)));
    }
    reverse(result.begin(), result.end());
    cout << result;
}