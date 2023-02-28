#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	string b;
	string change;
	cin >> a;
	while (cin >> b) {
		change += b;
	}
	for (int i = 0; i < a.length(); i++) {
		if (find(change.begin(),change.end(), a[i]) == change.end()) {
			continue;
		}
		else {
			a[i] = tolower(a[i]);
		}
	}
	cout << a;
}