#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int score[9] = { 100,100,200,200,300,300,400,400,500 };
	int real_score[9];
	int result = 0;
	for (int i = 0; i < 9; i++) {
		cin >> real_score[i];
		if (real_score[i] > score[i]) {
			cout << "hacker";
			return 0;
		}
		result += real_score[i];
	}
	if (result >= 100) {
		cout << "draw";
	}
	else {
		cout << "none";
	}
}