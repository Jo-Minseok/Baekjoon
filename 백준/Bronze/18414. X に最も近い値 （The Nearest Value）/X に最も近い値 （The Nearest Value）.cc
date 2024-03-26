#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int X, L, R;
	cin >> X >> L >> R;
	if (X >= L && X <= R) {
		cout << X;
		return 0;
	}
	cout << (abs(X - L) > abs(X - R) ? R : L);
}