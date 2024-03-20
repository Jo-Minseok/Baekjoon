#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string text[50];
    int alpha[26] = { 0 };
    int max = -1;
    for(int i=0;i<50;i++)
    {
        getline(cin, text[i]);
        for (int j = 0; j < text[i].length(); j++)
        {
            if (isalpha(text[i][j])) {
                alpha[text[i][j]-'a']++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (max <= alpha[i]) {
            max = alpha[i];
        }
    }
    for (int i = 0; i < 26; i++) {
        if (max == alpha[i]) {
            cout << (char)(i + 'a');
        }
    }


}