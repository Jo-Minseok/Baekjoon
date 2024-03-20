#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main() {
	string text;
	int count;
	cin >> count;
	cin.ignore();
	for (int i = 0; i < count; i++) {
		getline(cin,text);
		text[0] = toupper(text[0]);
		cout << text << "\n";
	}
}