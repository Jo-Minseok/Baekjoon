#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    while (getline(cin, text))
    {
        while (true) {
            auto index = text.find("BUG");
            if (index == string::npos) {
                break;
            }
            text.erase(index,3);
        }
        cout << text << "\n";
    }
}