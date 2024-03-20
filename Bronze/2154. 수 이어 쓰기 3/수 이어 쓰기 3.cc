#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    string text;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        text += to_string(i);
    }
    if (text.find(to_string(num)) != string::npos)
    {
        cout << text.find(to_string(num)) + 1;
    }
}