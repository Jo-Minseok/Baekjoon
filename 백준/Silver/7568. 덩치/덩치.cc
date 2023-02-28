#include <iostream>
using namespace std;
int main() {
	pair<int, int>arr[50];
	int test_case;
	int rank = 1;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j < test_case; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
				rank++;
			}
		}
		cout << rank << " ";
		rank = 1;
	}
}