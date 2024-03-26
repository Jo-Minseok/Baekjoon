#include <iostream>
using namespace std;
int main() {
	string a;
	string result;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'E') {
			result += 'I';
		}
		else if(a[i]=='I'){
			result += 'E';
		}
		else if (a[i] == 'N') {
			result += 'S';
		}
		else if(a[i] == 'S'){
			result += 'N';
		}
		else if (a[i] == 'T') {
			result += 'F';
		}
		else if (a[i] == 'F') {
			result += 'T';
		}
		else if (a[i] == 'J') {
			result += 'P';
		}
		else if (a[i] == 'P') {
			result += 'J';
		}
	}
	cout << result;
}