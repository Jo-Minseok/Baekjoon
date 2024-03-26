#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A_case, B_case;
	cin >> A_case >> B_case;

	vector<int> A(A_case), B(B_case), result;
	for (int i = 0; i < A_case; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < B_case; i++) {
		cin >> B[i];
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i < A_case; i++) {
		if (binary_search(B.begin(), B.end(), A[i]) == false) {
			result.push_back(A[i]);
		}
	}
	if (result.size()) {
		cout << result.size() << "\n";
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << " ";
		}
	}
	else {
		cout << 0;
	}
}