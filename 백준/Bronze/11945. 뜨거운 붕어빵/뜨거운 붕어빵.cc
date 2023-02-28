#include <iostream>
#include <string>
using namespace std;
int main() {
	int col, row;
	cin >> col >> row;
	getchar();
	for (int i = 0; i < col; i++) {
		string a, tmp;
		getline(cin, a);
		tmp = a;
		int count = a.length() - 1;
		for (int j = 0; j < a.length(); j++) {
			a[j] = tmp[count--];
		}
		cout << a << endl;
	}
}