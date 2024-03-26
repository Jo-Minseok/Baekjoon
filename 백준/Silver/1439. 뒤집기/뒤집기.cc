#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	cin >> a;
	int one = 0, zero = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != a[i + 1]) {
			if (a[i] == '0') {
				zero++;
			}
			else {
				one++;
			}
		}
	}
	cout << (zero > one ? one : zero);
}