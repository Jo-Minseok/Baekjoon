#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double K, D1, D2;
	cin >> K >> D1 >> D2;
	double result;
	if (D1 > D2) {
		result = sqrt(pow(K, 2) - pow(((D1 - D2))/2, 2));
	}
	else if (D1 < D2) {
		result = sqrt(pow(K,2) - pow(((D2 - D1))/2, 2));
	}
	else {
		result = K;
	}
	printf("%.2f",pow(result,2));
}