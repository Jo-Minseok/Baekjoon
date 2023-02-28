#include <iostream>
using namespace std;
int main() {
	int xpos, ypos;
	int xmax = 0;
	int ymax = 0;
	int xarr[1000] = { 0 };
	int yarr[1000] = { 0 };
	for (int i = 0; i < 3; i++) {
		cin >> xpos >> ypos;
		if (xmax < xpos) {
			xmax = xpos;
		}
		if (ymax < ypos) {
			ymax = ypos;
		}
		xarr[xpos - 1] ++;
		yarr[ypos - 1]++;
	}
	for (int i = 0; i < xmax; i++) {
		for (int j = 0; j < ymax; j++) {
			if (xarr[i] == 1 && yarr[j] == 1) {
				cout << i+1 << " " << j+1;
			}
		}
	}

}