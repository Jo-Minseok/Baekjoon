#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	cin >> a;
	bool check = true;
	int arr[10] = { 0 };
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '9' || a[i] == '6') {
			if (check) {
				arr[6]++;
				check = false;
			}
			else {
				arr[9]++;
				check = true;
			}
		}
		else {
			arr[a[i]-'0']++;
		}
	}
	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
}