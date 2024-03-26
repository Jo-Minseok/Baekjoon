#include <iostream>
using namespace std;
int main()
{
    string text;
    while (true)
    {
        int one_count = 0;
        cin >> text;
        if (text == "#")
        {
            break;
        }
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == '1')
            {
                one_count++;
            }
        }
        if (one_count == 0 || one_count % 2 == 0)
        {
            if (text[text.length() - 1] == 'e')
            {
                text[text.length() - 1] = '0';
            }
            else if (text[text.length() - 1] == 'o')
            {
                text[text.length() - 1] = '1';
            }
        }
        else
        {
            if (text[text.length() - 1] == 'e')
            {
                text[text.length() - 1] = '1';
            }
            else if (text[text.length() - 1] == 'o')
            {
                text[text.length() - 1] = '0';
            }
        }
        cout << text << "\n";
    }
}