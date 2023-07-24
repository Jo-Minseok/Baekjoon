#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    string text1, text2;
    cin >> text1 >> text2;
    int arr[26] = {0}, arr2[26] = {0};
    for (char a : text1)
    {
        arr[a - 'a']++;
    }
    for (char b : text2)
    {
        arr2[b - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        result += abs(arr[i] - arr2[i]);
    }
    cout << result;
}