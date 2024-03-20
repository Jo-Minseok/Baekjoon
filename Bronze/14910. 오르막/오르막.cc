#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, tmp = 0;
    bool check = false;
    bool result = false;
    while (cin >> num) {
        if (!check) {
            check = true;
            tmp = num;
        }
        else {
            if (tmp > num) {
                result = true;
            }
            tmp = num;
        }
    }
    if (result) {
        cout << "Bad";
    }
    else {
        cout << "Good";
    }
}