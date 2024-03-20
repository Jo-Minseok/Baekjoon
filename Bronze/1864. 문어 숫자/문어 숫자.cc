#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string text;
	while (true) {
		int result = 0;
		cin >> text;
		if (text == "#") {
			break;
		}
		for (int i = text.length() - 1,j=0; i >= 0; i--,j++) {
			switch (text[i])
			{
			case '-':
				result += 0 * pow(8, j);
				break;
			case '\\':
				result += 1 * pow(8, j);
				break;
			case '(':
				result += 2 * pow(8, j);
				break;
			case '@':
				result += 3 * pow(8, j);
				break;
			case '?':
				result += 4 * pow(8, j);
				break;
			case '>':
				result += 5 * pow(8, j);
				break;
			case '&':
				result += 6 * pow(8, j);
				break;
			case '%':
				result += 7 * pow(8, j);
				break;
			case '/':
				result += -1 * pow(8, j);
				break;
			}
		}
		cout << result << "\n";
	}
}