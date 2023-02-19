#include <iostream>
using namespace std;
int T(int i) {
	return i * (i + 1) / 2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num,num2;
	int result = 0;
	int r_result = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		result = 0;
		cin >> num2;
		for (int j = 1; j <= num2; j++) {
			result += j * T(j + 1);
		}
		cout << result << "\n";
	}
}