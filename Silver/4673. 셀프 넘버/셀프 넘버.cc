#include <iostream>
using namespace std;
bool num[10036] = {false};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i = 1;
    while (true)
    {
        int tmp_num = i;
        int tmp = 0;
        while (true)
        {
            tmp += tmp_num % 10;
            tmp_num /= 10;
            if (tmp_num == 0)
            {
                break;
            }
        }
        num[tmp + i] = true;
        if (!num[i])
        {
            cout << i << "\n";
        }
        if (i > 10000)
        {
            break;
        }
        i++;
    }
}