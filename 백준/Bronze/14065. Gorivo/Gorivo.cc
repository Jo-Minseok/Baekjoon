#include <iostream>
using namespace std;
int main() {
	double km,L;
	double num;
	cin >> num;
	km = num * 1609.344;
	L = 100000 / km * 3.785411784;
	printf("%.6lf\n", L);
}