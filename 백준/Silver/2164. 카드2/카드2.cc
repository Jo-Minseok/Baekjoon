#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	deque<int> deque;
	int count;
	cin >> count;
	for (int i = 1; i <= count; i++) {
		deque.push_back(i);
	}
	for (int i = 0; i < count-1; i++) {
		deque.pop_front();
		deque.push_back(deque.front());
		deque.pop_front();
	}
	cout << deque.back();
}