#include <iostream>
using namespace std;
class Stack {
	int arr[100000];
	int top = -1;
public:
	void push(int e) {
		arr[++top] = e;
	}
	void pop() {
		top--;
	}
	int result() {
		int sum = 0;
		for (int i = 0; i < top+1; i++) {
			sum += arr[i];
		}
		return sum;
	}
};
int main() {
	Stack stack;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			stack.pop();
		}
		else {
			stack.push(num);
		}
	}
	cout << stack.result();
}