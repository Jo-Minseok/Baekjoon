#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case,count_test,result = 0,num;
	cin >> test_case >> count_test;

	vector<int> ral;

	for (int i = 0; i < test_case;i++) {
		if (i == 0) {
			for (int i = 0; i < count_test; i++) {
				cin >> num;
				ral.push_back(num);
			}
		}
		else {
			int sum = 0;
			for (int j = 0; j < count_test; j++) {
				cin >> num;
				sum += abs(ral[j]-num);
			}
			if (sum > 2000) {
				result++;
			}
		}
	}
	if (result >= test_case / 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}