#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int hour, min, s, sec, c, count, query;
    cin >> hour >> min >> s >> count;
    sec = hour * 3600 + min * 60 + s;
    for (int i = 0; i < count; i++)
    {
        cin >> query;
        if (query == 1)
        {
            cin >> c;
            sec = (sec + c) % 86400;
        }
        else if (query == 2)
        {
            cin >> c;
            sec = (sec - c) % 86400;
            if (sec < 0)
            {
                sec += 24 * 3600;
            }
        }
        else
        {
            hour = sec / 3600;
            min = sec / 60 % 60;
            s = sec % 60;
            cout << hour << " " << min << " " << s << "\n";
        }
    }
}