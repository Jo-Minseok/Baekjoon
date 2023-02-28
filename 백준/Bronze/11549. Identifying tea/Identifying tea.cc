#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int count = 0,ans = 0;
	int answer[5] = { 0 };
	cin >> ans;
	for (int i = 0; i < 5; i++) {
		cin >> answer[i];
		if (answer[i] == ans) {
			count++;
		}
	}
	cout << count;
}