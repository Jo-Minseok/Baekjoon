#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {
        int arr[26] = {0};
        string text;
        getline(cin, text);
        for (char a : text)
        {
            if (isalpha(a))
            {
                arr[a - 'a']++;
            }
        }
        int max = *max_element(arr, arr + 26);
        int same_count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == max)
            {
                same_count++;
            }
        }
        if (same_count > 1)
        {
            cout << "?"
                 << "\n";
        }
        else
        {
            cout << (char)(max_element(arr, arr + 26) - arr + 'a') << "\n";
        }
    }
}