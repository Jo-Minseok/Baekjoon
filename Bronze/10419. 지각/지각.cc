#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count, time;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> time;
		int result = 0;
		while (true) {
			if (pow(result+1, 2) + result+1>time) {
				break;
			}
			result++;
		}
		cout << result << "\n";
	}
}