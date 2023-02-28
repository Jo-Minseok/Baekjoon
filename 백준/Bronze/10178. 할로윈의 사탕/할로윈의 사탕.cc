#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	pair<int, int> list;
	for (int i = 0; i < num; i++) {
		cin >> list.first >> list.second;
		cout << "You get " << list.first / list.second << " piece(s) and your dad gets " << list.first % list.second << " piece(s).\n";
	}
}