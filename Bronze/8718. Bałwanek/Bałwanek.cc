#include <iostream>
using namespace std;
int main() {
	int x, k;
	cin >> x >> k;
	int result[3];
	int xml = x * 1000;
	int kml = k * 1000;
	int max;
	result[0] = kml + kml * 2 + kml * 4;
	result[1] = kml / 2 + kml + kml * 2;
	result[2] = kml / 4 + kml / 2 + kml;
	for (int i = 0; i < 3; i++) {
		if (result[i] > xml) {
			result[i] = 0;
		}
	}
	max = result[0];
	for (int i = 0; i < 3; i++) {
		if (max < result[i]) {
			max = result[i];
		}
	}
	cout << max;
}