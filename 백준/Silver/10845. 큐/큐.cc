#include <iostream>
using namespace std;
class Queue {
	int arr[10000];
	int front_f;
	int back_f;
public:
	Queue() {
		front_f = 0;
		back_f = 0;
	}
	void push(int e) {
		arr[back_f++] = e;
	}
	int pop() {
		if (empty()==1) {
			return -1;
		}
		else {
			return arr[front_f++];
		}
	}
	int size() {
		if (empty()) {
			return 0;
		}
		else {
			return back_f - front_f;
		}
	}
	int empty() {
		if (front_f == back_f) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int front() {
		if (empty()==1) {
			return -1;
		}
		else {
			return arr[front_f];
		}
	}
	int back() {
		if (empty() == 1) {
			return -1;
		}
		else {
			return arr[back_f-1];
		}
	}

};

int main() {
	Queue que;
	int count;
	string command;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (command == "pop") {
			cout << que.pop() << endl;
		}
		else if (command == "size") {
			cout << que.size() << endl;
		}
		else if (command == "empty") {
			cout << que.empty() << endl;
		}
		else if (command == "front") {
			cout << que.front() << endl;
		}
		else if (command == "back") {
			cout << que.back() << endl;
		}
	}
}