#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	double q, p;
	double result = 0;
	for (int i = 0; i < count; i++) {
		cin >> p >> q;
		result += p * q;
	}
	printf("%.3f",result);
}