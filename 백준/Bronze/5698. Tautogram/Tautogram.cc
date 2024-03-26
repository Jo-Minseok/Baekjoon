#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	while (true) {
		bool check = true;
		int space[100], index = 1;
		space[0] = 0;
		getline(cin, a);
		if (a == "*") {
			break;
		}
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == ' ') {
				space[index++] = i+1;
			}
			a[i] = tolower(a[i]);
		}
		for (int i = 0; i < index-1; i++) {
			if (a[space[i]] != a[space[i+1]]) {
				check = false;
			}
		}
		if (check) {
			cout << "Y\n";
		}
		else {
			cout << "N\n";
		}
	}
}