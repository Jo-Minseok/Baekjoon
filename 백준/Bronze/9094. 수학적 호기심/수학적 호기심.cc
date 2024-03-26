#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int test_case;
	int result_count;
	int a = 0, b = 0;
	double m, n, result;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		result_count = 0;
		cin >> n >> m;
		for (int b = 1; b < n; b++) {
			for (int a = 1; a < b; a++) {
				result = (a * a + b * b + m) / (a * b);
				if (result - (int)result == 0){
					result_count++;
				}
			}
		}
		cout << result_count << "\n";
	}
}