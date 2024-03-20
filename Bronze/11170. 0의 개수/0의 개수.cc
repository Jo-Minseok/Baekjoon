#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, num1, num2;
    cin >> test_case;
    while (test_case--)
    {
        int result = 0;
        cin >> num1 >> num2;
        for (int i = num1; i <= num2; i++)
        {
            string num = to_string(i);
            for (char h : num)
            {
                if (h == '0')
                {
                    result++;
                }
            }
        }
        cout << result << "\n";
    }
}