#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int real_weight, com_weight, index = 1;
    while (true)
    {
        cin >> com_weight >> real_weight;
        if (com_weight == 0 && real_weight == 0)
        {
            break;
        }
        bool death = false;
        int result = 0;
        while (true)
        {
            char action;
            int hour;
            cin >> action >> hour;
            if (action == '#' && hour == 0)
            {
                break;
            }
            switch (action)
            {
            case 'E':
                real_weight -= hour;
                break;
            case 'F':
                real_weight += hour;
                break;
            }
            if (real_weight <= 0)
            {
                result = -1;
                death = true;
            }
        }
        if (!death)
        {
            if (real_weight < com_weight * 2 && real_weight > com_weight * 0.5)
            {
                result = 0;
            }
            else
            {
                result = 1;
            }
        }
        cout << index++ << " ";
        switch (result)
        {
        case -1:
            cout << "RIP\n";
            break;
        case 0:
            cout << ":-)\n";
            break;
        case 1:
            cout << ":-(\n";
            break;
        }
    }
}