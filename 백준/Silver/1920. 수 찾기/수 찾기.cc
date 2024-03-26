#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N,M,num;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int start = 0;
		int end = N - 1;
		bool check = false;
		cin >> num;
		while (end >= start) {
			if (arr[(start + end) / 2] > num) {
				end = (start + end) / 2 - 1;
			}
			else if (arr[(start + end) / 2] == num) {
				check = true;
				break;
			}
			else {
				start = (start + end) / 2 + 1;
			}
		}
		if (check == true) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}