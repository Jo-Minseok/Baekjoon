#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	char alpha;
	int input;
	for (int i = 0; i < num; i++) {
		cin >> input >> alpha;
		for (int j = 0; j < input; j++) {
			for (int k = 0; k <= j; k++) {
				cout << alpha;
			}
			cout << "\n";
			alpha++;
			if (!isalpha(alpha)) {
				alpha = 'A';
			}
		}
		cout << "\n";
	}
}