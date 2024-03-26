#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int problem = 0;
    while (true)
    {
        string text;
        getline(cin, text);
        if (text == "고무오리 디버깅 끝")
        {
            break;
        }
        else if (text == "문제")
        {
            problem++;
        }
        else if (text == "고무오리")
        {
            if (problem == 0)
            {
                problem = 2;
            }
            else
            {
                problem--;
            }
        }
    }
    if (problem == 0)
    {
        cout << "고무오리야 사랑해";
    }
    else
    {
        cout << "힝구";
    }
}