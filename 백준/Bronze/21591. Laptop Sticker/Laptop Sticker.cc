#include <iostream>
using namespace std;
int main() {
	double width, height;
	double width_st, height_st;
	cin >> width >> height >> width_st >> height_st;
	double width_result = (width - width_st)/2;
	double height_result = (height - height_st)/2;
	if (width_result >= 1 && height_result >= 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}