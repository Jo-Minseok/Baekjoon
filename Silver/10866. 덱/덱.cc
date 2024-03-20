#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	deque<int> deque;
	string command;
	int count,num;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> num;
			deque.push_front(num);
		}
		else if (command == "push_back") {
			cin >> num;
			deque.push_back(num);
		}
		else if (command == "pop_front") {
			if (deque.empty() == 0) {
				cout << deque.front() << "\n";
				deque.pop_front();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (command == "pop_back") {
			if (deque.empty() == 0) {
				cout << deque.back() << "\n";
				deque.pop_back();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (command == "size") {
			cout << deque.size() << "\n";
		}
		else if (command == "empty") {
			cout << deque.empty() << "\n";
		}
		else if (command == "front") {
			if (deque.empty() == 0) {
				cout << deque.front() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (command == "back") {
			if (deque.empty() == 0) {
				cout << deque.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
}