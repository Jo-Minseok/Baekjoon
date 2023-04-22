#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    unsigned long long num;
    cin >> num;
    bitset<80> a(num);
    bool check = false;
    string result = a.to_string();
    if (result == "0")
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] == '0' && check == true)
        {
            cout << result[i];
        }
        else if (result[i] == '1')
        {
            check = true;
            cout << result[i];
        }
    }
}