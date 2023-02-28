#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	int* item = new int[count];
	int* price = new int[count];
	int* result = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> item[i] >> price[i];
		result[i] = price[i] + (price[i] - 2) * (item[i] - 1);
	}
	for (int i = 0; i < count; i++) {
		cout << item[i] << " " << price[i] << "\n";
		cout << result[i] << "\n";
	}
}