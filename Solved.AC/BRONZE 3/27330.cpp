#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N, M,num;
	cin >> N;
	vector<int> arr1, arr2;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr1.push_back(num);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		arr2.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		sum += arr1[i];
		if (find(arr2.begin(), arr2.end(), sum)!= arr2.end()) {
			sum = 0;
		}
	}
	cout << sum;
}