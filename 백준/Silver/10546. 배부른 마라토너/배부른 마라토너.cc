#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
bool test(pair<string, int> a) {
	if (a.second) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int human;
	cin >> human;
	map<string, int>list;
	string name;
	for (int i = 0; i < human; i++) {
		cin >> name;
		list[name]++;
	}
	for (int i = 0; i < human - 1; i++) {
		cin >> name;
		list[name]--;
	}
	cout << find_if(list.begin(), list.end(),test)->first;
}