#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0;
	while (true) {
		string a;
		getline(cin, a);
		if (a == "") {
			break;
		}
		i++;
	}
	cout << i;
}