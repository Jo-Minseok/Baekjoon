#include <iostream>
using namespace std;
class Pos {
public:
	int x;
	int y;

	Pos() {
		x = 0;
		y = 0;
	}
};
class Circle :public Pos {
public:
	int radius;
	Circle() {
		radius = 0;
	}
};

int main() {
	Pos human[4];
	Circle apple;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		cin >> human[i].x;
	}
	cin >> apple.x >> apple.y >> apple.radius;
	for (int i = 0; i < 4; i++) {
		if (human[i].x == apple.x) {
			index = i+1;
		}
	}
	cout << index;
}