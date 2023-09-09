#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text, tmp;
    getline(cin, text);
    stringstream ss(text);
    int index = 0;
    bool first = false, second = false, mode = false;
    while (ss >> tmp)
    {
        if (tmp == "true")
        {
            if (index == 0)
            {
                first = true;
            }
            else
            {
                second = true;
            }
        }
        else if (tmp == "AND")
        {
            mode = true;
        }
        else if (tmp == "OR")
        {
            mode = false;
        }
        else if (tmp == "false")
        {
            if (index == 0)
            {
                first = false;
            }
            else
            {
                second = false;
            }
        }
        index++;
    }
    if (mode)
    {
        if (first && second)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
    else
    {
        if (first || second)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}