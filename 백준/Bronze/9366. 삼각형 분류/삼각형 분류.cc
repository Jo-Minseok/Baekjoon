#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test_case, num[3];
    cin >> test_case;
    for (int i = 1; i <= test_case; i++) {
        cin >> num[0] >> num[1] >> num[2];
        sort(num, num + 3);
        if (num[0] == num[1] && num[1] == num[2]) {
            cout << "Case #" << i << ": equilateral\n";
        }
        else {
            if (num[2] >= (num[0] + num[1])) {
                cout << "Case #" << i << ": invalid!\n";
            }
            else {
                if (num[0] == num[1] || num[0] == num[2] || num[1] == num[2]) {
                    cout << "Case #" << i << ": isosceles\n";
                }
                else {
                    cout << "Case #" << i << ": scalene\n";
                }
            }
        }
    }
}