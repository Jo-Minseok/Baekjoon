#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
    int hour1, min1, sec1, hour2, min2, sec2, time1 = 0, time2 = 0, r_time = 0;
    scanf("%d:%d:%d", &hour1, &min1, &sec1);
    scanf("%d:%d:%d", &hour2, &min2, &sec2);
    time1 = sec1 + min1 * 60 + hour1  * 60 * 60;
    time2 = sec2 + min2 * 60 + hour2 * 60 * 60;
    if (time2 < time1)
    {
        r_time = time2 + 24 * 60 * 60 - time1;
    }
    else
    {
        r_time = time2 - time1;
    }
    hour1 = r_time / 3600;
    min1 = (r_time % 3600) / 60;
    sec1 = (r_time % 3600) % 60;
    if (hour1 < 10)
    {
        cout << "0" << hour1 << ":";
    }
    else
    {
        cout << hour1 << ":";
    }
    if (min1 < 10)
    {
        cout << "0" << min1 << ":";
    }
    else
    {
        cout << min1 << ":";
    }
    if (sec1 < 10)
    {
        cout << "0" << sec1;
    }
    else
    {
        cout << sec1;
    }
}