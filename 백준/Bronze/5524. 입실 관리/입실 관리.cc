#include <iostream>
#include <string>
using namespace std;
int main() {
	int count = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string a;
		cin >> a;
		for (int j = 0; j < a.length(); j++) {
			a[j] = tolower(a[j]);
		}
		cout << a << endl;
	}
}