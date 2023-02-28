#include <iostream>
using namespace std;
int main() {
	long long kp[100], dp[100], ap[100], k,d,a, mission_count, game_count;
	long long sum;
	long long h = 0;
	cin >> game_count;
	for (int i = 0; i < game_count; i++) {
		sum = 0;
		cin >> mission_count;
		for (int j = 0; j < mission_count; j++) {
			cin >> kp[j] >> dp[j] >> ap[j];
		}
		cin >> k >> d >> a;
		for (int j = 0; j < mission_count; j++) {
			h = 0;
			h += (k * kp[j]) - (d * dp[j]) + (a * ap[j]);
			if (h > 0) {
				sum += h;
			}
		}
		cout << sum << "\n";
	}
}