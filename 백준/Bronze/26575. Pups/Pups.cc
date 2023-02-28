#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	double dog, feed, price;
	for (int i = 0; i < count; i++) {
		cin >> dog >> feed >> price;
		printf("$%.2f\n", dog * feed * price);
	}
}