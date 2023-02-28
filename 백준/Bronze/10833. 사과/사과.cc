#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int result = 0;
	pair<int, int>* list = new pair<int, int>[count];
	for (int i = 0; i < count; i++) {
		cin >> list[i].first >> list[i].second;
		result += list[i].second % list[i].first;
	}
	cout << result;
}