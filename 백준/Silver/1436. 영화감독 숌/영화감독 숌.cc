#include <iostream>
#include <string>
using namespace std;
int main() {
	int num, result =0;
	int num_list = 0;
	cin >> num;
	while (true) {
		string num_s = to_string(num_list);
		if (num_s.find("666")!=string::npos) {
			result++;
		}
		if (result == num) {
			cout << num_s;
			break;
		}
		num_list++;
	}
}