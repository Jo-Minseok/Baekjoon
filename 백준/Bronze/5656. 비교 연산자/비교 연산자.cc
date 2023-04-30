#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string compare;
	int num1, num2;
	int index = 1;
	while (true) {
		cin >> num1 >> compare >> num2;

		if (compare == "E") {
			break;
		}
		cout << "Case " << index << ": ";
		if (compare == ">") {
			cout << (num1 > num2 ? "true" : "false") << "\n";
		}
		else if (compare == ">=") {
			cout << (num1 >= num2 ? "true" : "false") << "\n";
		}
		else if (compare == "<") {
			cout << (num1 < num2 ? "true" : "false") << "\n";
		}
		else if (compare == "<=") {
			cout << (num1 <= num2 ? "true" : "false") << "\n";
		}
		else if (compare == "==") {
			cout << (num1 == num2 ? "true" : "false") << "\n";
		}
		else if (compare == "!=") {
			cout << (num1 != num2 ? "true" : "false") << "\n";
		}
		index++;
	}
}