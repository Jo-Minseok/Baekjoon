#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double uk, jae,M;
	cin >> uk >> jae;
	M = (jae - uk) / 400;
	cout << 1 / (1 + pow(10, M));
}