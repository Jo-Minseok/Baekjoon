#include <iostream>
using namespace std;
int main() {
    int count;
    unsigned long long a, b, c, d;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> a >> b >> c >> d;
        if (a * b > c * d) {
            cout << "TelecomParisTech\n";
        }
        else if (a * b < c * d) {
            cout << "Eurecom\n";
        }
        else {
            cout << "Tie\n";
        }

    }
}