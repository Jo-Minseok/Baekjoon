#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case;
	double num;
	string text;
	cin >> test_case;
	cout.precision(2);
	while (test_case--) {
		cin >> num; getline(cin, text);
		for (int i = 0; i < text.length(); i++) {
			switch (text[i])
			{
			case '@':
				num *= 3;
				break;
			case '%':
				num += 5;
				break;
			case '#':
				num-=7;
				break;
			default:
				break;
			}
		}
		cout << fixed << num << "\n";
	}
}