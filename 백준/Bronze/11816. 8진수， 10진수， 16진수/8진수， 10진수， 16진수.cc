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
		if (num_text[1] == 'x') {
			stringstream convert(num_text);
			convert >> std::hex >>  num;
			cout << num;
		}
		else {
			stringstream convert(num_text);
			convert >> std::oct >> num;
			cout << num;
		}
	}
	else {
		cout << num_text;
	}
}