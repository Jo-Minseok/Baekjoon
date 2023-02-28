#include <iostream>
using namespace std;

class CircleQueue {
	int rear;
	int front;
	int* arr;
	int size;
	int next_size;
public:
	CircleQueue(int count) {
		arr = new int[count] {0};
		size = count;
		rear = 0;
		front = 0;
		next_size = 0;
	}
	void init() {
		next_size = 0;
		rear = 0;
	}
	bool is_full() {
		return (rear % size == front % size - 1);
	}
	bool is_empty() {
		return (rear == front);
	}

	void add(int e) {
		if (is_full()) {
			cout << "원형 큐가 가득 참";
			return;
		}
		arr[++rear%size] = e;
	}
	int remove(int next) {
		for (int i = 0; i < next;) {
			if (arr[++rear % size] != 0){
				i++;
			}
		}
		int tmp = arr[ rear% size];
		arr[rear % size] = 0;
		return tmp;
	}
};
int main(){
	int count, next;
	int next_real = 0;
	cin >> count >> next;
	CircleQueue circle(count);
	for (int i = 0; i < count; i++) {
		circle.add(i + 1);
	}
	circle.init();
	cout << "<";
	for (int i = 0; i < count; i++) {
		if (i == count - 1) {
			cout << circle.remove(next);
		}
		else {
			cout << circle.remove(next) << ", ";
		}
	}
	cout << ">";

}