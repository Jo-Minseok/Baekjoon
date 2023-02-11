#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	string a;
	cin >> num >> a;
	for (int i = 0; i < a.length(); i += num) {
		cout << a[i];
	}
}