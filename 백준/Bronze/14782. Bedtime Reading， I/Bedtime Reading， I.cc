#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	cin >> num;
	int result = 0;
	for (int i = 1; i <= num; i++) {
		if (num%i == 0) {
			result += i;
		}
	}
	cout << result;
}