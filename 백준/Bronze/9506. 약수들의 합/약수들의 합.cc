#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        else
        {
            vector<int> list;
            int result = 0;
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    result += i;
                    list.push_back(i);
                }
            }
            if (result == num)
            {
                cout << num << " = ";
                for (int i = 0; i < list.size(); i++)
                {
                    cout << list[i];
                    if (i != list.size() - 1)
                    {
                        cout << " + ";
                    }
                }
                cout << "\n";
            }
            else
            {
                cout << num << " is NOT perfect.\n";
            }
        }
    }
}