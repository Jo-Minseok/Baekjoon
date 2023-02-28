#include <iostream>
using namespace std;
struct infor {
public:
	int num;
	int x_pos, y_pos;
};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	infor num1, num2;
	cin >> num1.num >> num2.num;
	if (num1.num % 4 == 0) {
		num1.x_pos = num1.num / 4 - 1;
	}
	else {
		num1.x_pos = num1.num / 4;
	}
	if (num1.num % 4 == 0) {
		num1.y_pos = 4;
	}
	else {
		num1.y_pos = num1.num % 4;
	}
	if (num2.num % 4 == 0) {
		num2.x_pos = num2.num / 4 - 1;
	}
	else {
		num2.x_pos = num2.num / 4;
	}
	if (num2.num % 4 == 0) {
		num2.y_pos = 4;
	}
	else {
		num2.y_pos = num2.num % 4;
	}
	cout << abs(num1.x_pos - num2.x_pos) + abs(num1.y_pos - num2.y_pos);
}