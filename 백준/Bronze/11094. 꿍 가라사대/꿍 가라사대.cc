#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text, sample = "Simon says";
    int count;
    cin >> count;
    cin.ignore();
    while (count--)
    {
        getline(cin, text);
        int index = text.find(sample);
        if (index == string::npos)
        {
            continue;
        }
        else
        {
            cout << text.substr(index + sample.length(), text.length() - index) << "\n";
        }
    }
}