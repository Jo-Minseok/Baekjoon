#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int count;
    double area;
    double total = 0;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> area;
        total += pow(area, 3);
    }

    printf("%.11f", cbrt(total));
}