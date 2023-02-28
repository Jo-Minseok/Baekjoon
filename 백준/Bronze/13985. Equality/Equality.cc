#include <iostream>
#include <string>
using namespace std;
int main() {
	string math, tmp;
	int sum = 0, check_result = 0;
	getline(cin, math);
	for (int i = 0; i < math.length(); i++) {
		if (math[i] == '=') {
			check_result = 1;
		}
		else if (math[i] >= '0' && math[i] <= '9' && check_result == 0) {
			tmp = math[i];
			sum += stoi(tmp);
			tmp = "";
		}
		else if (math[i] >= '0' && math[i] <= '9' && check_result == 1) {
			tmp += math[i];
		}
	}
	if (sum == stoi(tmp)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}