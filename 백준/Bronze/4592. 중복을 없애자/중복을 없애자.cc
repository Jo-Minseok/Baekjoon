#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count, num;
    while (true)
    {
        vector<int> list;
        cin >> count;
        if (count == 0)
        {
            break;
        }
        for (int i = 0; i < count; i++)
        {
            cin >> num;
            if (i == 0)
            {
                list.push_back(num);
            }
            else if (list.back()!=num)
            {
                list.push_back(num);
            }
        }
        for (auto i = list.begin(); i != list.end(); i++)
        {
            cout << *i << " ";
        }
        cout << "$" << "\n";
    }
}