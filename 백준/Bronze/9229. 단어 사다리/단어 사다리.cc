#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	while (true) {		
		cin >> input;
		if (input == "#") {
			break;
		}
		vector<string> list;
		list.push_back(input);
		while (true) {
			cin >> input;
			if (input == "#") {
				break;
			}
			list.push_back(input);
		}
		bool check = true;
		for (int i = 1; i < list.size(); i++) {
			if (list[i - 1].length() != list[i].length()) {
				check = false;
				break;
			}
			else {
				int different = 0;
				for (int j = 0; j < list[0].length(); j++) {
					if (list[i - 1][j] != list[i][j]) {
						different++;
					}
				}
				if (different != 1) {
					check = false;
				}
			}
		}
		if (check) {
			cout << "Correct\n";
		}
		else {
			cout << "Incorrect\n";
		}
	}
}