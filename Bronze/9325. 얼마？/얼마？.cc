#include <iostream>
using namespace std;
int main() {
	int count;
	int price;
	int option_count;
	int option,option_price;
	int result;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> price;
		cin >> option_count;
		result = price;
		for (int j = 0; j < option_count; j++) {
			cin >> option >> option_price;
			result += option * option_price;
		}
		cout << result << "\n";
	}
}