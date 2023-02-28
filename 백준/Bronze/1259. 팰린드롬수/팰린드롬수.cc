#include <iostream>

using namespace std;

int main() {
	string text;
	int max_index = 0, min_index = 0, count = 0;;
	while (true) {
		max_index = count = min_index = 0;
		cin >> text;
		if (text == "0") {
			break;
		}
		else {
			max_index = text.length() - 1;
			for (int i = 0; i < text.length();i++){
				if (max_index > min_index&&text[max_index--] == text[min_index++]) {
					count++;
				}
				else {
					if ((text.length()/2) == count) {
						cout << "yes" << endl;
						break;
					}
					else {
						cout << "no" << endl;
						break;
					}
					
				}
			}
		}
	}
}