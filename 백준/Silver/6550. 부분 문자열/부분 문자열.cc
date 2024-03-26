#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string mini_text, text;
    while (cin >> mini_text >> text) {
        int index = 0;
        bool check = true;
        for (int i = 0; i < mini_text.length(); i++) {
            size_t a = text.find(mini_text[i]);
            if (a == string::npos) {
                cout << "No" << "\n";
                check = false;
                break;
            }
            else {
                text = text.substr(a+1, text.length() - a);
            }
        }
        if (check) {
            cout << "Yes" << "\n";
        }
    }
}