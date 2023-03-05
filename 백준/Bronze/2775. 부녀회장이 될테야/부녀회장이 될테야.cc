#include <iostream>
using namespace std;
int sum(int a, int b) {
	if (a == 0) {
		return b;
	}
	else if (b == 1) {
		return 1;
	}
	else {
		return sum(a - 1, b) + sum(a,b-1) ;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int test_case,k,n;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> k >> n;
		cout << sum(k, n) << "\n";;
	}
}