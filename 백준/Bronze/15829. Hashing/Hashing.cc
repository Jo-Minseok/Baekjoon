#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case;
	string alpha;
	unsigned long long result = 0;
	cin >> test_case;
	cin >> alpha;
	for (int i = 0; i < alpha.length(); i++) {
		unsigned long long num = 1;
		for (int j = 0; j < i; j++) {
			num *= 31;
		}
		result += (alpha[i] - 'a' + 1) * num;
	}
	cout << result%1234567891;
}