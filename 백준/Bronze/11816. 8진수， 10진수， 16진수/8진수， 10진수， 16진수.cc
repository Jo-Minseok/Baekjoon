#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string num_text;
	int num;
	cin >> num_text;
	if (num_text[0] == '0' && num_text.length()!=1) {
		stringstream convert(num_text);
		if (num_text[1] == 'x') {
			convert >> hex >>  num;
			
		}
		else {
			convert >> oct >> num;
		}
	}
	else {
		cout << num_text;
		return 0;
	}
	cout << num;
}