#include <iostream>
using namespace std;
int main() {
	int group_count;
	int member_count;
	int positive_count;
	cin >> group_count >> member_count >> positive_count;
	if (group_count + positive_count * member_count > member_count * group_count) {
		cout << 1;
	}
	else if (group_count + positive_count * member_count < member_count * group_count) {
		cout << 2;
	}
	else {
		cout << 0;
	}
}