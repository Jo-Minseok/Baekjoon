#include <iostream> 
using namespace std;
int main() {
	int a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	if ((a[0] >= 8) && a[1] == a[2] && (a[3] >= 8)) {
		cout << "ignore";
	}
	else {
		cout << "answer";
	}
}