#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);
	cout << a[1];
}