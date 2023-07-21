#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text;
    cin >> text;
    int result = 0, result1 = 0;
    for(int i=0;i<text.length()-2;i++)
    {
        if (text[i] == 'J') {
            if (text[i + 1] == 'O' && text[i + 2] == 'I') {
                result++;
                i++;
            }
        }
        else if (text[i] == 'I') {
            if (text[i + 1] == 'O' && text[i + 2] == 'I') {
                result1++;
                i++;
            }
        }
    }
    cout << result << "\n";
    cout << result1;
}