#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B, C, D= 0; // A 고정, B 가변, C 판매이익
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1;
		return 0;
	}
	cout << A / (C - B) + 1;
}