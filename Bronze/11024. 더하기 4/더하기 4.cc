#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count;
	int result = 0;
	string num,tmp;
	cin >> count;
	cin.ignore();
	for (int i = 0; i < count; i++) {
		result = 0;
		getline(cin, num);
		for (int i = 0; i < num.length(); i++) {
			if (num[i] != ' ') {
				tmp += num[i];
			}
			else {
				result += stoi(tmp);
				tmp = "";
				continue;
			}
		}
		result += stoi(tmp);
		tmp = "";
		cout << result << "\n";
	}
}