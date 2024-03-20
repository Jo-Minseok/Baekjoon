#include <iostream>
using namespace std;
int main() {
	long double num, result = 0;
	while (cin >> num) {
		result += num;
	}
	printf("%.2Lf", result);
}