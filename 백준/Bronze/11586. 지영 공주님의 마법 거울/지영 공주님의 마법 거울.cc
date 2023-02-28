#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	cin >> count;
	string* list = new string[count];
	for (int i = 0; i < count; i++) {
		cin >> list[i];
	}
	int mode;
	cin >> mode;
	switch (mode)
	{
	case 1:
		for (int i = 0; i < count; i++) {
			cout << list[i] << "\n";
		}
		break;
	case 2:
		for (int i = 0; i < count; i++) {
			for (int j = list[i].length()-1; j >= 0; j--) {
				cout << list[i][j];
			}
			cout << "\n";
		}
		break;
	case 3:
		for (int i = count-1; i >= 0; i--) {
			cout << list[i] << "\n";
		}
		break;
	}
}