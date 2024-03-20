#include <iostream>

using namespace std;

int main() {
	string str, str1;
	char cal;
	cin >> str >> cal >> str1;
	int strsize = str.length();
	int str1size = str1.length();

	if (cal == '*') {
		int totalsize = strsize + str1size - 2;
		cout << '1';
		for (int i = 0; i < totalsize; i++) {
			cout << 0;
		}
	}
	else {
		if (strsize == str1size) {
			cout << '2';
			for (int i = 0; i < strsize - 1; i++) {
				cout << 0;
			}
		}
		else if (strsize != str1size) {
			int totalsize = strsize > str1size ? strsize : str1size;
			for (int i = totalsize; i > 0; i--) {
				if (i == strsize || i == str1size) {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
		}
	}
}