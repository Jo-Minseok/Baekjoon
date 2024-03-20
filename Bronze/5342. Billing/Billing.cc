#include <iostream>
using namespace std;
int main() {
	string a;
	double result = 0;
	while (true) {
		cin >> a;
		if (a == "EOI") {
			break;
		}
		else if (a == "Paper") {
			result += 57.99;
		}
		else if (a == "Printer") {
			result += 120.50;
		}
		else if (a == "Planners") {
			result += 31.25;
		}
		else if (a == "Binders") {
			result += 22.50;
		}
		else if (a == "Calendar") {
			result += 10.95;
		}
		else if (a == "Notebooks") {
			result += 11.20;
		}
		else if (a == "Ink") {
			result += 66.95;
		}
	}
	printf("$%.2f", result);
}