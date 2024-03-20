#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int ifpro, forpro;
	for (int i = 0; i < count; i++) {
		cin >> ifpro >> forpro;
		if ((ifpro <= 2 && forpro <= 1) || (ifpro <= 1 && forpro <= 2)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
}