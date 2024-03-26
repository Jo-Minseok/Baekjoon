#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	double* arr = new double[count];
	double total = 0, V=0;
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
		total = 1 - (1 - V) * (1 - arr[i] / 100);
		printf("%.7f\n", total * 100);
		V = total;
	}
}