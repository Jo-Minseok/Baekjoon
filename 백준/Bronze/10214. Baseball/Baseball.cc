#include <iostream>
using namespace std;
int main() {
	int test_case;
	cin >> test_case;
	int num1, num2;
	int result_Y = 0, result_K = 0;
	for (int i = 0; i < test_case; i++) {
		result_Y = result_K = 0;
		for (int j = 0; j < 9; j++) {
			cin >> num1 >> num2;
			result_Y += num1;
			result_K += num2;
		}
		if (result_Y > result_K) {
			cout << "Yonsei\n";
		}
		else if (result_K > result_Y) {
			cout << "Korea\n";
		}
		else {
			cout << "Draw\n";
		}
	}
}