#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string text,result;
        bool check = true;
        cin >> text;
        if (text == "#")
        {
            break;
        }
        for (int i = text.length() - 1; i >= 0; i--)
        {
            if (text[i] == 'i' || text[i] == 'o' || text[i] == 'v' || text[i] == 'w' || text[i]=='x')
            {
                result += text[i];
            }
            else if (text[i] == 'b' || text[i] == 'd' || text[i] == 'q' || text[i] == 'p')
            {
                switch (text[i])
                {
                case 'b':
                    result += 'd';
                    break;
                case 'd':
                    result += 'b';
                    break;
                case 'p':
                    result += 'q';
                    break;
                case 'q':
                    result += 'p';
                    break;
                }
            }
            else
            {
                check = false;
                break;
            }
        }
        if (check) {
            cout << result << "\n";
        }
        else {
            cout << "INVALID\n";
        }
    }
}