#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	for (int a = 6; a <= 100; a++) {
		for (int b = 2; b < a; b++) {
			for (int c = b+1; c < a; c++) {
				for (int d = c+1; d < a; d++) {
					if ((a * a * a) == (b * b * b + c * c * c + d * d * d)) {
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
					}
				}
			}
		}
	}
}