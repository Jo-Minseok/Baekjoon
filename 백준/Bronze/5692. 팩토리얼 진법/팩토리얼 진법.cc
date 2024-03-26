#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string num;
    int result,other_index;
    while (true)
    {
        result = 0;
        cin >> num;
        if (num == "0")
        {
            break;
        }
        other_index = num.length();
        for (int i = 0; i <num.length(); i++,other_index--)
        {
            result += (num[i] - '0') * factorial(other_index);
        }
        cout << result << "\n";
    }
}