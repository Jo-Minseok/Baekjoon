#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case, byte_size;
    char a;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> byte_size;
        cout << "Case #" << i + 1 << ": ";
        for (int i = 0; i < byte_size; i++)
        {
            char result = 0;
            for (int i = 7; i >= 0; i--)
            {
                cin >> a;
                if (a == 'I')
                {
                    result += pow(2, i);
                }
            }
            cout << result;
        }
        cout << "\n";
    }
}