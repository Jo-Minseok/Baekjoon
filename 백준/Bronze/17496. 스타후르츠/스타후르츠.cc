#include <iostream>
using namespace std;
int main() {
	int N, T, C, P;
	cin >> N >> T >> C >> P;
	if (N % T != 0) {
		cout << (N / T) * C * P;
	}
	else {
		cout << (N / T - 1) * C * P;
	}
}