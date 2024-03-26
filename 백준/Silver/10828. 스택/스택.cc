#include <iostream>

using namespace std;

class Stack {
	int arr[10000] = { 0 };
	int index;
public:
	Stack() {
		index = -1;
	}
	void push(int element) {
		if (full() == 1) {
			cout << "스택이 이미 가득 찬 상태입니다." << endl;
		}
		else {
			arr[++index] = element;
		}
	}
	int pop() {
		if (empty() == 1) {
			return -1;
		}
		else {
			return arr[index--];
		}
	}
	int size() {
		return index+1;
	}
	int empty() {
		if (index == -1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int full() {
		if (index == 10000) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void init() {
		index = -1;
	}
	int top() {
		if (empty() == true) {
			return -1;
		}
		else {
			return arr[index];
		}
	}
};

int main() {
	Stack test;
	int count,num;
	string command;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			test.push(num);
		}
		else if (command == "top") {
			cout << test.top() << endl;
		}
		else if (command == "size") {
			cout << test.size() << endl;
		}
		else if (command == "pop") {
			cout << test.pop() << endl;
		}
		else if (command == "empty") {
			cout << test.empty() << endl;
		}
	}
}