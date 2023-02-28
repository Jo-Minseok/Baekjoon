#include <iostream>
using namespace std;
int main() {
	int count = 0;
	cin >> count;
	string intiger = "int ";
	string index = "a";
	cout << intiger << index<<";" << endl;
	for (int i = 0; i < count; i++) {
		cout << intiger;
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		if (i == 0) {
			cout << "ptr";
			cout << " = &" << index << ";" << endl;;
		}
		else if (i == 1) {
			index = "ptr";
			cout << "ptr" << i+1;
			cout << " = &" << index << ";" << endl;
		}
		else {
			index = "ptr";
			cout << "ptr" << i + 1;
			cout << " = &" << index << i << ";" << endl;
		}
	}
}