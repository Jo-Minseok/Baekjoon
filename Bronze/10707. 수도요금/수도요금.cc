#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int X_A;
	int Y_B, Y_C, Y_D;
	int use;
	int result1, result2;
	cin >> X_A >> Y_B >> Y_C >> Y_D >> use;
	result1 = X_A * use;
	if (Y_C < use) {
		result2 = Y_B + (use - Y_C) * Y_D;
	}
	else {
		result2 = Y_B;
	}
	cout << (result1 > result2 ? result2 : result1);
}