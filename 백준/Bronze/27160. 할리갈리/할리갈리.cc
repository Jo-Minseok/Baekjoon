#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int card_count;
	map<string, int> list = { {"BANANA",0},{"PLUM",0},{"STRAWBERRY",0},{"LIME",0} };
	cin >> card_count;
	string fruit;
	bool check = false;
	int num;
	for (int i = 0; i < card_count; i++) {
		cin >> fruit >> num;
		list[fruit] += num;
	}
	for (auto it : list) {
		if (it.second == 5) {
			check = true;
		}
	}
	cout << (check ? "YES" : "NO");
}