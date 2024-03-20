#include <iostream>
using namespace std;
int main() {
	double price, gram;
	cin >> price >> gram;
	double result = price/gram;
	int conve_count;
	cin >> conve_count;
	for (int i = 0; i < conve_count; i++) {
		cin >> price >> gram;
		if (result > price / gram) {
			result = price / gram;
		}
	}
	printf("%.2f", result * 1000);
}