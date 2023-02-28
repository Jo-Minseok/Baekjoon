#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, a;
	cin >> n >> a;
	cout << (int)round((180 - a) / 2 + a / 2);
}