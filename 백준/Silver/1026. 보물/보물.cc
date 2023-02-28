#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int num;
	int sum = 0;
	cin >> num;
	int* arr = new int[num] {0};
	int* arr2 = new int[num] {0};
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++) {
		cin >> arr2[i];
	}
	sort(arr,arr+num);
	sort(arr2, arr2 + num,comp);
	for (int i = 0; i < num; i++) {
		sum += arr[i] * arr2[i];
	}
	cout << sum;
}