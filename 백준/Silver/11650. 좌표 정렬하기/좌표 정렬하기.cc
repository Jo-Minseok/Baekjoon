#include <iostream>
#include <algorithm>
using namespace std;
struct point {
public:
	int x, y;
};

bool compare(point a, point b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int count;
	register int i, j;
	cin >> count;
	point* arr = new point[count];
	for (i = 0; i < count; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr + count, compare);
	for (i = 0; i < count; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
}