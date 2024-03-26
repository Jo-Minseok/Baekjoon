#include <iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int** arr = new int*[m];
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	if (m < 8) {
		cout << "unsatisfactory";
	}
	else {
		cout << "satisfactory";
	}
}