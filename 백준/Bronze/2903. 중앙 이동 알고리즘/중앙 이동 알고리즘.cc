#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	cin >> num;
	int dot = 2;
	for (int i = 0; i < num; i++) {
		dot = dot + dot - 1;
	}
	cout << dot * dot;
}