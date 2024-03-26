#include <iostream>
using namespace std;
int main() {
	int h1, h2, s1, s2;
	cin >> h1>>s1;
 	cin >>h2 >>s2;
	if (h1 + s2 > h2 + s1) {
		cout << "Persepolis";
	}
	else if (h2 + s1 > h1 + s2) {
		cout << "Esteghlal";
	}
	else {
		if (s1 < s2) {
			cout << "Persepolis";
		}
		else if (s1 > s2) {
			cout << "Esteghlal";
		}
		else {
			cout << "Penalty";
		}
	}
}