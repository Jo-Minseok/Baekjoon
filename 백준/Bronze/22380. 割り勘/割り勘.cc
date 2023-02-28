#include <iostream>
using namespace std;
int main() {
	int human_count, need_money;
	int money;
	int result;
	while (true) {
		result = 0;
		cin >> human_count >> need_money;
		if (human_count == 0 && need_money == 0) {
			break;
		}
		for (int i = 0; i < human_count; i++) {
			cin >> money;
			if (money < (need_money / human_count)) {
				result += money;
			}
			else {
				result += need_money / human_count;
			}
		}
		cout << result << "\n";
	}
}