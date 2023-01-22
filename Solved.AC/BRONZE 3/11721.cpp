#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	cin >> a;
	int j = 0;
	for (int i = 0; i < a.length(); i++,j++) {
		cout << a[i];
		if (j == 9) {
			cout << "\n";
			j = -1;
		}
	}
}