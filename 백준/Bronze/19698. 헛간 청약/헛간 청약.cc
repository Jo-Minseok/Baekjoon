#include <iostream>
using namespace std;
int main() {
	int count_cow;
	int width, height;
	int area;
	cin >> count_cow >> width >> height >> area;
	if ((width / area) * (height / area) > count_cow) {
		cout << count_cow;
	}
	else {
		cout << (width / area) * (height / area);
	}
}