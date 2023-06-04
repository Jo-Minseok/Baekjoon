#include <iostream>
using namespace std;
int main()
{
    string text;
    while (true)
    {
        int arr[26] = {0};
        getline(cin, text);
        if (text == "*")
        {
            break;
        }
        for (char i : text)
        {
            if (isalpha(i))
            {
                arr[i - 'a']++;
            }
        }
        bool check = true;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }
}