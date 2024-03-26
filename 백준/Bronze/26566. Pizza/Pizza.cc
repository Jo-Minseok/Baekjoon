#include <iostream>
using namespace std;
int main() {
	int count;
	double A1, P1; // 면적, 가격
	double R1, P2; // 면적, 가격
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> A1 >> P1;
		cin >> R1 >> P2;
		if (A1 / P1 > (R1*R1*3.141592) / P2) {
			cout << "Slice of pizza\n";
		}
		else {
			cout << "Whole pizza\n";
		}
	}
}