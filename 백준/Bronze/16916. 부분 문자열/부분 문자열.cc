#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char text1[1000001];
    char text2[1000001];
    cin >> text1 >> text2;
    if (strstr(text1, text2) == NULL)
    {
        cout << 0;
        return 0;
    }
    cout << 1;
}