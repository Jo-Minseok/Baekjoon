#include <iostream>
#define PI 3.14159265358979323846
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double A1, P1;
	double R1, P2;
	double slice ,whole;
	cin >> A1 >> P1 >> R1 >> P2;
	slice = A1 / P1;
	whole = (R1 * R1 * PI)/P2;
	if (slice < whole) {
		cout << "Whole pizza";
		
	}
	else {
		cout << "Slice of pizza";
	}
}