#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num*2; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < num; j++) {
				if (j % 2 == 0) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		else {
			for (int j = 0; j < num; j++) {
				if (j % 2 == 0) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		cout << "\n";
	}
}