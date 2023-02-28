#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		for(int j=0;j<count;j++){
			cout << "@@@@@";
		}
		cout << "\n";
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cout << "@";
		}
		cout << "\n";
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cout << "@@@@@";
		}
		cout << "\n";
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cout << "@";
		}
		cout << "\n";
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cout << "@";
		}
		cout << "\n";
	}
}