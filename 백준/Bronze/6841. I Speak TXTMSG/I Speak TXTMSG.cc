#include <iostream>
using namespace std;
int main() {
	while (true) {
		string a;
		cin >> a;
		if (a == "CU") {
			cout << "see you\n";
		}
		else if (a == ":-)") {
			cout << "I’m happy\n";
		}
		else if (a == ":-(") {
			cout << "I’m unhappy\n";
		}
		else if (a == ";-)") {
			cout << "wink\n";
		}
		else if (a == ":-P") {
			cout << "stick out my tongue\n";
		}
		else if (a == "(~.~)") {
			cout << "sleepy\n";
		}
		else if (a == "TA") {
			cout << "totally awesome\n";
		}
		else if (a == "CCC") {
			cout << "Canadian Computing Competition\n";
		}
		else if (a == "CUZ") {
			cout << "because\n";
		}
		else if (a == "TY") {
			cout << "thank-you\n";
		}
		else if (a == "YW") {
			cout << "you’re welcome\n";
		}
		else if (a == "TTYL") {
			cout << "talk to you later\n";
			break;
		}
		else {
			cout << a << "\n";
		}
	}
}