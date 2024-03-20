#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x[4], y[4];
	cin >> x[0] >> y[0] >> x[1] >> y[1];
	cin >> x[2] >> y[2] >> x[3] >> y[3];
	int xmin=x[0], xmax=x[0], ymin=y[0], ymax=y[0];
	for (int i = 0; i < 4; i++) {
		if (x[i] < xmin) {
			xmin = x[i];
		}
		if (x[i] > xmax) {
			xmax = x[i];
		}
		if (y[i] < ymin) {
			ymin = y[i];
		}
		if (y[i] > ymax) {
			ymax = y[i];
		}
	}
	if (abs(xmax - xmin) > abs(ymax - ymin)) {
		cout << pow(abs(xmax - xmin), 2);
	}
	else if (abs(xmax - xmin) < abs(ymax - ymin)) {
		cout << pow(abs(ymax - ymin), 2);
	}
	else {
		cout << abs(xmax - xmin) * abs(ymax - ymin);
	}
	
}