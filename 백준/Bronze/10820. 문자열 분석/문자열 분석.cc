#include <iostream>
#include <string>
using namespace std;
int main() {
	string text;
	while (getline(cin, text)) {
		int s_alpha = 0, b_alpha = 0, digit = 0, space = 0;
		for (int i = 0; i < text.length(); i++) {
			if (islower(text[i])) {
				s_alpha++;
			}
			else if (isupper(text[i])) {
				b_alpha++;
			}
			else if (isdigit(text[i])) {
				digit++;
			}
			else if (isspace(text[i])) {
				space++;
			}
		}
		cout << s_alpha << " " << b_alpha << " " << digit << " " << space << "\n";
	}
}