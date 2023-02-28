#include <iostream>
using namespace std;
int main() {
	int total;
	int price;
	int tmp_result = 0;
	cin >> total;
	for (int i = 0; i < 9; i++) {
		cin >> price;
		tmp_result += price;
	}
	cout << total - tmp_result;
}