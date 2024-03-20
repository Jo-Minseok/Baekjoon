#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string text;
    cin >> count;
    getchar();
    for (int i = 0; i < count; i++) {
        getline(cin, text);
        cout << i + 1 << ". " << text << endl;
    }
}