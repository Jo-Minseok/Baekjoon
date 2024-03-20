#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int count = 0, result_count = 0 , a, b, c;
	int x;
	cin >> count;
	for (int i = 0; i < count; i++) {
		x = 1;
		cin >> a >> b >> c;
		result_count = 0;
		while (x >= 1 && x <= a && x <= b && x <= c) {
			result_count++;
			x++;
		}
		cout << result_count <<"\n";
	}
}