#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pair<string, int> list[] = {{"January",31}, {"February",28}, {"March",31},{"April",30}, {"May",31},{"June",30},{"July",31},{"August",31},{"September",30},{"October",31},{"November",30},{"December",31}};
    int year, day, hour, minute, max_second;
    int total_second = 0;
    char month[10];
    scanf("%s %d, %d %d:%d", month, &day, &year, &hour, &minute);
    string month_string(month);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        max_second = 366 * 24 * 60 * 60;
        list[1].second = 29;
    }
    else {
        max_second = 365 * 24 * 60 * 60;
    }
    for (auto i : list) {
        if (i.first == month_string) {
            break;
        }
        total_second += i.second * 24 * 60 * 60;
    }
    total_second += (day-1) * 24 * 60 * 60 + hour * 60 * 60 + minute * 60;
    printf("%.10f", (1.0 * total_second / max_second) * 100);
}