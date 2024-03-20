#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        bool check = true;
        string text1, text2;
        int arr1[26] = {0}, arr2[26] = {0};
        cin >> text1 >> text2;
        for (char i : text1)
        {
            arr1[i - 'a']++;
        }
        for (char i : text2)
        {
            arr2[i - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i])
            {
                check = false;
                break;
            }
        }
        cout << text1 << " & " << text2 << " are ";
        if (!check)
        {
            cout << "NOT ";
        }
        cout << "anagrams.\n";
    }
}