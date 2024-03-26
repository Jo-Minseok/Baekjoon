#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	string name;
	cin >> test_case;
	cin.ignore();
	while (test_case--) {
		getline(cin, name);
		stringstream space(name);
		string tmp;
		bool first = true;
		while (space >> tmp) {
			if (first) {
				cout << "god";
				first = false;
				continue;
			}
			cout << tmp;	
		}
		cout << "\n";
	}
}