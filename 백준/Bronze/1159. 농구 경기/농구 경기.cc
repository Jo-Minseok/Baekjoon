#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string result;
	int test_case;
	string a;
	map<char, int> list;
	cin >> test_case;
	while (test_case--) {
		cin >> a;
		list[a[0]]++;
	}
	for (auto i = list.begin(); i != list.end(); i++) {
		if (i->second >= 5) {
			result += i->first;
		}
	}

	if (result == "") {
		cout << "PREDAJA";
	}
	else {
		cout << result;
	}
}