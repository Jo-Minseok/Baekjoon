#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double A, B, S;
	cin >> S >> A >> B;
	if (S < A) {
		cout << (int)250;
		return 0;
	}
	cout << ceil((S - A) / B)*100 + 250;
}