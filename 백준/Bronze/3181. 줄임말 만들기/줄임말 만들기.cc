#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text, tmp;
    int index = 0;
    getline(cin, text);
    stringstream ss(text);
    while (ss >> tmp)
    {
        char tmp_c;
        if (index == 0)
        {
            tmp_c = toupper(tmp[0]);
            cout
                << tmp_c;
        }
        else
        {
            if (tmp == "i" || tmp == "pa" || tmp == "te" || tmp == "ni" || tmp == "niti" || tmp == "a" || tmp == "ali" || tmp == "nego" || tmp == "no" || tmp == "ili")
            {
                continue;
            }
            else
            {
                tmp_c = toupper(tmp[0]);
                cout
                    << tmp_c;
            }
        }
        index++;
    }
}