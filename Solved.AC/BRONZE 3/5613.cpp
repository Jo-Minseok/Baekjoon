#include <iostream>
using namespace std;
int main() {
	bool check = true;
	int num, result = 0;
	string nume;
	while (true) {
		if (check) {
			cin >> result;
			check = false;
		}
		else {
			cin >> nume;
			if (nume == "+" || nume == "-" || nume == "/" || nume == "*") {
				cin >> num;
				if (nume == "-") {
					result -= num;
				}
				else if (nume == "+") {
					result += num;
				}
				else if (nume == "*") {
					result *= num;
				}
				else if (nume == "/") {
					result /= num;
				}
			}
			else if (nume == "=") {
				break;
			}
		}
	}
	cout << result;
}