#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int cupcount, ball, cha_count, tmp1, tmp2;
	cin >> cupcount >> ball >> cha_count;
	for (int i = 0; i < cha_count; i++) {
		cin >> tmp1 >> tmp2;
		if (ball == tmp1) {
			ball = tmp2;
		}
		else if (ball == tmp2) {
			ball = tmp1;
		}
	}
	cout << ball;
}