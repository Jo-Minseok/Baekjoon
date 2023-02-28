#include <iostream>
using namespace std;
int main() {
	int head, protect;
	cin >> head >> protect;
	unsigned long long* head_arr = new unsigned long long[head];
	unsigned long long* protect_arr = new unsigned long long[protect];
	unsigned long long max_head = 0, max_protect = 0;
	for (int i = 0; i < head; i++) {
		cin >> head_arr[i];
		if (max_head < head_arr[i]) {
			max_head = head_arr[i];
		}
	}
	for (int i = 0; i < protect; i++) {
		cin >> protect_arr[i];
		if (max_protect < protect_arr[i]) {
			max_protect = protect_arr[i];
		}
	}
	cout << max_protect + max_head;
}