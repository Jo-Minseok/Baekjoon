#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5] = {0};
    string text;
    cin >> text;
    for (int i = 0; i < text.length(); i++)
    {
        switch (text[i])
        {
        case 'M':
            arr[0]++;
            break;
        case 'O':
            arr[1]++;
            break;
        case 'B':
            arr[2]++;
            break;
        case 'I':
            arr[3]++;
            break;
        case 'S':
            arr[4]++;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}