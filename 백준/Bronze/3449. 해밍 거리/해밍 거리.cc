#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    string text1, text2;
    cin >> test_case;
    while (test_case--)
    {
        int result = 0;
        cin >> text1 >> text2;
        for (int i = 0; i < text1.length(); i++)
        {
            if (text1[i] != text2[i])
                result++;
        }
        cout << "Hamming distance is " << result << ".\n";
    }
}