#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int bread, meet, count = 0;
    cin >> bread >> meet;
    while(bread - 2 >= 0 && meet > 0) {
        bread -= 2;
        meet -= 1;
        count++;
    }
    cout << count;
}