#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    string line;
    cin >> num;
    cin.ignore();
    while (num--)
    {
        getline(cin, line);
        string tmp;
        long long tmp_a[3] = {0}, result, oper = 0, index = 0;
        stringstream a(line);
        while (a >> tmp)
        {
            if (tmp == "+")
            {
                oper = 0;
            }
            else if (tmp == "-")
            {
                oper = 1;
            }
            else if (tmp == "*")
            {
                oper = 2;
            }
            else if (tmp == "/")
            {
                oper = 3;
            }
            else if (tmp == "=")
            {
                continue;
            }
            else
            {
                tmp_a[index] = stoll(tmp);
                index++;
            }
        }
        switch (oper)
        {
        case 0:
            result = tmp_a[0] + tmp_a[1];
            break;
        case 1:
            result = tmp_a[0] - tmp_a[1];
            break;
        case 2:
            result = tmp_a[0] * tmp_a[1];
            break;
        case 3:
            result = tmp_a[0] / tmp_a[1];
            break;
        }
        if (result == tmp_a[2])
        {
            cout << "correct\n";
        }
        else
        {
            cout << "wrong answer\n";
        }
    }
}