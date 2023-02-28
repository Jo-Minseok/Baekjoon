#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	string text;
	cin >> text;
	int a = 0, b = 0;
	for (int i = 0; i < text.length()-1; i++) {
		char tmp = text[i + 1];
		if (text[i] == 'A') {
			a += atoi(&tmp);
		}
		else if(text[i] == 'B'){
			b += atoi(&tmp);
		}
	}
	if (a > b) {
		cout << "A";
	}
	else {
		cout << "B";
	}
}