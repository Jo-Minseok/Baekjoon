#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int coin_count, money,coin_money;
	int last_index;
	int result = 0;
	vector <int> list;
	cin >> coin_count >> money;
	for (int i = 0; i < coin_count; i++) {
		cin >> coin_money;
		list.push_back(coin_money);
		if (money >= coin_money) {
			last_index = i;
		}
	}
	for (int i = last_index; i >= 0; i--) {
		result += money / list[i];
		money %= list[i];
	}
	cout << result;
}